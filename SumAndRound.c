#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[6];
        int total = 0, m = 1;
        for (int i = 1; i < 6; i++) {
            arr[i] = n % 10;
            n = n / 10;
            if (arr[i] != 0) {
                total++;
            }
        }
        printf("%d\n", total);
        for (int i = 1; i < 6; i++) {
            if (arr[i] != 0) {
                printf("%d ", arr[i] * m);
            }
            m = m * 10;
        }
        printf("\n");
    }
    return 0;
}

