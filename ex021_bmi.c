#include <math.h>
#include <stdio.h>

int main()
{
    int a, b;
    printf("output weight (kg) : ");
    scanf("%d", &a);
    printf("output height (m) : ");
    scanf("%d", &b);

    float height = (float)b / 100;
    float bmi = a / (height * height);

    if (bmi < 18.5)
    {
        printf("output BMI is %.2f,  underweight\n", bmi);
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("output BMI is %.2f,  normal weight\n", bmi);
    }
    else if (bmi >= 25.0 && bmi < 29.9)
    {
        printf("output BMI is %.2f,  overweight\n", bmi);
    }
    else
    {
        printf("output BMI is %.2f,  obese\n", bmi);
    }
}