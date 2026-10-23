#include <stdio.h>

int main() {
    int side_1 = 4, side_2 = 5, side_3 = 7;
    int perimeter = side_1 + side_2 + side_3;
    int price_per_meter = 85000;
    int cost = perimeter * price_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side_1, side_2, side_3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", perimeter);
    printf("Harga tanah Per Meter adalah %d\n", price_per_meter);

    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", cost);

    return 0;
}