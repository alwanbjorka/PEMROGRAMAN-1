#include <stdio.h>
#include <math.h>

int main() {
    double A, B;

    if (scanf("%lf %lf", &A, &B) == 2) {
        double tinggi = A;
        double miring = B;
        double alas = sqrt((miring * miring) - (tinggi * tinggi));
        double keliling = alas + tinggi + miring;
        double luas = 0.5 * alas * tinggi;

        printf("Alas = %.0f cm\n", alas);
        printf("Tinggi = %.0f cm\n", tinggi);
        printf("Keliling = %.0f cm\n", keliling);
        printf("Luas = %.0f cm^2\n", luas);
    }

    return 0;
}