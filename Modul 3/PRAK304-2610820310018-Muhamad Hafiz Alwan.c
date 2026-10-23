#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("Nol\n");
    } else if (n >= 1 && n < 10) {
        printf("Satuan\n");
    } else if (n >= 10 && n < 20) {
        printf("Belasan\n");
    } else if (n >= 20 && n < 100) {
        printf("Puluhan\n");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    return 0;
}