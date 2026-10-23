#include <stdio.h>

int main() {
    float laps = 5;
    float distance = 14;
    float phi = 3.14;

    float circumference = distance / laps;
    float radius = circumference / (2 * phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", laps);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance);

    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);

    return 0;
}