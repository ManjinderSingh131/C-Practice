#include <stdio.h>

int main()
{
    // Count characters in input, 1st version
    long nc;
    nc = 0;
    while (getchar() != -1)
    {
        ++nc;
    }
    printf("%ld\n", nc);
    return 0;
}
