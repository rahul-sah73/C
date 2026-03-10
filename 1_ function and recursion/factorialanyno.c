#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int result[200] = {0};
        result[0] = 1;
        int result_size = 1;

        for (int i = 2; i <= n; i++) {
            int carry = 0;
            for (int j = 0; j < result_size; j++) {
                int product = result[j] * i + carry;
                result[j] = product % 10;
                carry = product / 10;
            }

            while (carry) {
                result[result_size] = carry % 10;
                carry /= 10;
                result_size++;
            }
        }

        for (int i = result_size - 1; i >= 0; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    return 0;
}