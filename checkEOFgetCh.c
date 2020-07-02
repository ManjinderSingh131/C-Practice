#include <stdio.h>
int main()
{
    int k;
    printf("Enter a key, \n");
    k = getchar();
    int p = EOF;
    printf("%d\n", k == p);
    printf("The value of getchar() != EOF is: %d", k != EOF);
}