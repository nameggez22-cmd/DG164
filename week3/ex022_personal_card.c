#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char name[50], favorite_subject[50];
    int age;
    float GPA;

    printf("=== Enter information ===\n");
    printf("name            : ");
    scanf("%s", name);
    printf("age             : ");
    scanf("%d", &age);
    printf("gpa             : ");
    scanf("%f", &GPA);
    printf("favorite subject: ");
    scanf("%s", favorite_subject);

    //---------------------------------------------------------------------------
    printf("\n=== Your Personal Card ===\n");
    printf("┌───────────────────────────────────┐\n");
    printf("│ Name              : %s           │\n", name);
    printf("│ Age               : %d", age);
    printf(" years old  │\n");
    printf("│ GPA               : %.2f         │\n", GPA);
    printf("│ Favorite Subject  : %s           │\n", favorite_subject);
    printf("└───────────────────────────────────┘\n");
    // Ex.Answer : Name=Name Age=19 GPA=3.53 Favorite Subject=ENG
    return 0;
}