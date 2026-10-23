#include <stdio.h>
#include <string.h>

void baca(const char *label, char *buf, int n) {
    printf("%s : ", label);
    fgets(buf, n, stdin);
    buf[strcspn(buf, "\n")] = '\0';
}

int main() {
    char nama[100], nim[30], kelas[30], ttl[60], alamat[150], hobby[50], hp[20];

    baca("Nama", nama, sizeof nama);
    baca("NIM", nim, sizeof nim);
    baca("Kelas Paralel", kelas, sizeof kelas);
    baca("Tempat/Tanggal Lahir", ttl, sizeof ttl);
    baca("Alamat", alamat, sizeof alamat);
    baca("Hobby", hobby, sizeof hobby);
    baca("No. HP", hp, sizeof hp);

    printf("\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Paralel : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. HP : %s\n", hp);
    return 0;
}