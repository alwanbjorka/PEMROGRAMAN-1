#include <stdio.h>

int main() {
    int shoes_a = 400000;
    int shoes_b = 350000;
    int discount_a = 13;
    int discount_b = 21;

    int price_a_discount = shoes_a - (shoes_a * discount_a / 100);
    int price_b_discount = shoes_b - (shoes_b * discount_b / 100);

    printf("Harga sepatu A adalah %d\n", shoes_a);
    printf("Harga sepatu B adalah %d\n", shoes_b);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", discount_a, price_a_discount);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", discount_b, price_b_discount);
    
    return 0;
}