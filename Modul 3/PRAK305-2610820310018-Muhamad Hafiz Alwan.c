#include <stdio.h>

int main() {
    int total_detik, hari, jam, menit, detik, sisa;
    scanf("%d", &total_detik);

    hari = total_detik / 86400;
    sisa = total_detik % 86400;
    jam = sisa / 3600;
    sisa %= 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
    return 0;
}