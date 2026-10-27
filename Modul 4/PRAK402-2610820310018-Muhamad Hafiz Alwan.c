#include <stdio.h>

int main() {
    int batas, i;
    scanf("%d", &batas);

    for (i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    if (batas % 2 != 0) {
        batas--;
    }
    for (i = batas; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}