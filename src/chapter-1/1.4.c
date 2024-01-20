#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr, celsius;

int main()
{
    // Fahrenheit to Celsius
    fahr = LOWER;
    printf("F\tC\n");
    while (fahr <= UPPER)   {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%0.0f\t%0.1f\n", fahr, celsius);
        fahr += STEP;
    }

    printf("\n===\n\n");

    // Celsius to Fahrenheit
    celsius = LOWER;
    printf("C\tF\n");
    while (celsius <= UPPER)    {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%0.0f\t%0.1f\n", celsius, fahr);
        celsius += STEP;
    }

    return 0;
}
