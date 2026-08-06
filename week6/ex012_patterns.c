#include <stdio.h>

int main(void)
{
    int i, j, tri = 5;

    printf("Pattern 1: Triangle\n");
    for (i = 1; i <= tri; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int squareSize = 4;

    printf("\nPattern 2: Square (n = 4)\n");
    for (i = 1; i <= squareSize; i++)
    {
        for (j = 1; j <= squareSize; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern 3: Diamond (n = 3)\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}