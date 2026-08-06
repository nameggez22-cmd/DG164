#include <stdio.h>

int main(void)
{
    int n;
    int isprime = 1;
    int divisor = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (divisor = 2; divisor * divisor <= n; divisor++)
        {
            if (n % divisor == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
