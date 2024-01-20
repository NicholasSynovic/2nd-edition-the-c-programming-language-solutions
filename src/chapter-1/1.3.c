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

    return 0;
}
