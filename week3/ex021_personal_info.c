#include <stdio.h>

int main()
{

    char name[50], Favorite_Subject[50];
    int age;
    float GPA;

    printf("=== Enter infomation ===\n");
    printf("name            : ");
    scanf("%s", name);
    printf("age             : ");
    scanf("%d", &age);
    printf("gpa             : ");
    scanf("%f", &GPA);
    printf("favorite subject: ");
    scanf("%s", Favorite_Subject);

    //---------------------------------------------------------------------------
    printf("\n=== Personal Infomation ===\n");
    printf("name              : %s\n", name);
    printf("age               : %d", age);
    printf(" years old\n");
    printf("gpa               : %.2f\n", GPA);
    printf("favorite subject  : %s\n", Favorite_Subject);

    return 0;
}