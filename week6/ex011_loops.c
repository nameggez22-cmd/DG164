#include <stdio.h>

int main(void)
{
    int i, sum;

    printf("For loop:\n");
    sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum = %d\n\n", sum);

    printf("While loop:\n");
    i = 1;
    sum = 0;
    while (i <= 10)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }
    printf("\nSum = %d\n\n", sum);

    printf("Do-while loop:\n");
    i = 1;
    sum = 0;
    do
    {
        printf("%d ", i);
        sum += i;
        i++;
    } while (i <= 10);
    printf("\nSum = %d\n", sum);

    return 0;
}