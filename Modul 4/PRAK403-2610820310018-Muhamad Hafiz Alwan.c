#include <stdio.h>

int main() {
    int a, b, i, j;
    scanf("%d %d", &a, &b);

    i = a;
    j = b;

    if (a < b) {
        while (i <= b && j >= a) {
            printf("%d %d", i, j);
            if (i != b) {
                printf("-");
            }
            i++;
            j--;
        }
    } else {
        while (i >= b && j <= a) {
            printf("%d %d", i, j);
            if (i != b) {
                printf("-");
            }
            i--;
            j++;
        }
    }
    printf("\n");
    return 0;
}