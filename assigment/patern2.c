#include <stdio.h>

int main()
{
    int i, j, n = 5;
    char C = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", C); 
            C++;
        }
        printf("\n");
    }
    return 0;
}
