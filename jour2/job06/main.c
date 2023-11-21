#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 2; i <= 1000; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= (int)pow(i, 0.5); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime) {
            printf("%i\n",i);
        }
    }
}