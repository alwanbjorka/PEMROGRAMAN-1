#include <stdio.h>

int main() {
    int pilihan;
    float nil1, nil2, hasil;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhamad Hafiz Alwan\n");
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nil1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nil2);

            if (pilihan == 1) {
                hasil = nil1 + nil2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nil1, nil2, hasil);
            } else if (pilihan == 2) {
                hasil = nil1 - nil2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nil1, nil2, hasil);
            } else if (pilihan == 3) {
                hasil = nil1 * nil2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nil1, nil2, hasil);
            } else if (pilihan == 4) {
                hasil = nil1 / nil2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", nil1, nil2, hasil);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (pilihan != 5);

    return 0;
}