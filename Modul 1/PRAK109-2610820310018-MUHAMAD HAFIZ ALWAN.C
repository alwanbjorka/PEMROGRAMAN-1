#include <stdio.h>

int main() {
    int troops_yu_zhong = 958730;
    int number_of_heroes = 5;

    int troops_per_hero = troops_yu_zhong / number_of_heroes;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", troops_yu_zhong);
    printf("Jumlah pahlawan = %d\n", number_of_heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", troops_per_hero);
    
    return 0;
}