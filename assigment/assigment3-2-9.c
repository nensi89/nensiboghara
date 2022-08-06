#include <stdio.h>

int main()
{
    int n = 1562, max = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        if (rem > max)
        {
            max = rem;
        }
        n /= 10;
    }
    printf("Maximum value of the digit is %d", max);
    return 0;
}