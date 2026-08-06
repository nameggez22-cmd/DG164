#include <stdio.h>

int main(void)
{
    int rows = 3;
    int cols = 5;
    int count = 1;

    for (int i = 1; i <= rows; i++)
    {
        printf("+---+---+---+---+---+\n");
        for (int j = 1; j <= cols; j++)
        {
            printf("| ");
            printf("%2d", count);
            count++;
        }
        printf("|\n");
    }
    printf("+---+---+---+---+---+\n");
    return 0;
}