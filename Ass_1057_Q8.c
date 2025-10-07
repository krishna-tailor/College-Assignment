#include <stdio.h>
int main() {
    float meters, centimeters;
    printf("Enter length in meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100;  // 1 meter = 100 cm

    printf("Length in centimeters = %.2f cm\n", centimeters);

    return 0;
}
