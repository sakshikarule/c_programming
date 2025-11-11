#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    // Celsius to Fahrenheit
    printf("Enter the temp in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temp in Fahrenheit is: %.2f\n", fahrenheit);

    // Fahrenheit to Celsius
    printf("\nEnter the temp in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temp in Celsius is: %.2f\n", celsius);

    return 0;
}
