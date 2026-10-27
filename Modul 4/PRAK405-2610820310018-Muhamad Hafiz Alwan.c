#include <stdio.h>

int main() {
    int n, kelipatan, i, j;
    int total_seluruhnya = 0, total_baris;

    scanf("%d %d", &n, &kelipatan);

    for (i = 1; i <= n; i++) {
        total_baris = 0;
        for (j = i; j >= 1; j--) {
            printf("(%d*%d)", j, kelipatan);
            if (j > 1) {
                printf("+");
            }
            total_baris += j * kelipatan;
        }
        printf(" = %d\n", total_baris);
        total_seluruhnya += total_baris;
    }
    printf("%d\n", total_seluruhnya);

    return 0;
}