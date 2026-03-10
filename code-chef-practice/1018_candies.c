// Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.
// For the prices of the candies to be valid, Abhi's boss laid down the following condition:
// A given type of candy must have distinct prices in all N cities.
// In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not.
// You are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length 
// N, such that both arrays consist of distinct elements.
// Both arrays can have distinct elements only if no element in the original array is repeated more than twice.



#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int d = 2 * n;
        int price[d]; // Corrected array size

        for (int i = 0; i < d; i++) {
            scanf("%d", &price[i]); // Corrected scanf usage
        }

        int counts[100001] = {0}; // Assuming max price <= 100000
        int flag = 0;

        for (int i = 0; i < d; i++) {
            counts[price[i]]++;
            if (counts[price[i]] > 2) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}