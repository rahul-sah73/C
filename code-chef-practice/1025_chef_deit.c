#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        long long current_protein = 0;
        int possible = 1;
        int day = 0;

        for (int i = 0; i < n; i++) {
            current_protein += a[i];
            if (current_protein < k) {
                possible = 0;
                day = i + 1;
                break;
            }
            current_protein -= k;
        }

        if (possible) {
            printf("YES\n");
        } else {
            printf("NO %d\n", day);
        }
    }

    return 0;
}