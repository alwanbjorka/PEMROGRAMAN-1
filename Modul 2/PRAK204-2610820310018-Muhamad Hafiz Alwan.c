#include <stdio.h>

int main() {
    double r, t;
    double phi = 22.0 / 7.0;

    if (scanf("%lf %lf", &r, &t) == 2) {
        double volume = phi * r * r * t;
        double luas = 2 * phi * r * (r + t);
        double keliling = 2 * phi * r;

        printf("Volume = %.2f\n", volume);
        printf("Luas = %.2f\n", luas);
        printf("Keliling = %.2f\n", keliling);
    }

    return 0;
}