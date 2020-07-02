#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version;

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* Lower limit of temperature scale */
    upper = 300; /* upper limit of temperature scale */
    step = 20;   /* step size */

    celsius = lower;
    printf("C\tF\n");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%3.0f\t %6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }

    return 0;
}
