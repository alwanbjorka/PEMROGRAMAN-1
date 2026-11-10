#include <stdio.h>

void Biodata(int tahunLahir, char Namaku[], char Asal[])
{   
    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", Asal);
}

int main()
{
    int tahunLahir;
    char A[20], B[15];
    scanf("%d", &tahunLahir);
    getchar();
    scanf("%[^\n]%*c", &A);
    scanf("%[^\n]%*c", &B);
    Biodata(tahunLahir, A, B);
    return 0;
}