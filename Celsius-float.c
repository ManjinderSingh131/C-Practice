#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version;

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* Lower limit of temperature scale */
    upper = 300; /* upper limit of temperature scale */
    step = 20;   /* step size */

    fahr = lower;
    printf("Fahr\tCelsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t %6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }

    return 0;
}
