#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int Max_HP, Attack_Power, Defense, Level;
    char Character_Name[50];

    printf("=== build character ===\n");
    printf("Character Name : ");
    scanf("%s", Character_Name);
    printf("Max HP         : ");
    scanf("%d", &Max_HP);
    printf("Attack Power   : ");
    scanf("%d", &Attack_Power);
    printf("Defense        : ");
    scanf("%d", &Defense);
    printf("Level          : ");
    scanf("%d", &Level);
    //---------------------------------------------------------------------------
    printf("\n======= CHARACTER menu =======\n");
    printf("╔════════════════════════════════╗\n");
    printf("║ %s                             ║\n", Character_Name);
    printf("╠════════════════════════════════╣\n");
    printf("║ Level          : %d            ║\n", Level);
    printf("║ HP             : %d/%d         ║\n", Max_HP, Max_HP);
    printf("║ ATK            : %d            ║\n", Attack_Power);
    printf("║ DEF            : %d            ║\n", Defense);
    printf("╠════════════════════════════════╣\n");
    printf("║ HP Bar:[██████████] 100%       ║\n");
    printf("║ Total Power: %d                ║\n", (Attack_Power * 2 + Defense + Max_HP / 10));
    printf("╚════════════════════════════════╝\n");
    // Ex.Answer : Name=Name Level=1111 HP=229 ATK=92 DEF=9922
    return 0;
}