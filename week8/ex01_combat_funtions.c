#include <stdio.h>
#include <math.h>

int calculateDamage(int attack, int defense, int isCrit)
{
    int scaledAttack = isCrit ? (int)(attack * 1.5) : attack;
    int damage = scaledAttack - defense;
    return (damage < 1) ? 1 : damage;
}

int isCriticalHit(int roundnumber)
{
    return roundnumber % 5 == 0;
}

void displayHP(int current, int max)
{
    int filled = (current * 10) / max;
    char bar[11];
    for (int i = 0; i < 10; i++)
    {
        bar[i] = (i < filled) ? '#' : '-';
    }
    bar[10] = '\0';
    printf("[%-10s]\n", bar);
}

void printCombatResults(int round, int damage, int isCrit)
{
    printf("Round %2d: ", round);
    if (isCrit)
    {
        printf("*** CRITICAL! ***");
    }
    else
    {
        printf("Normal           ");
    }
    printf(" — Damage: %2d | ", damage);
}

int main(void)
{
    int attack = 10;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("-------------------------------------------\n");

    for (int round = 1; round <= 10 && enemyHP > 0; round++)
    {
        int isCrit = isCriticalHit(round);

        int scaledAttack = isCrit ? (int)(attack * 1.5) : attack;
        int damage = calculateDamage(attack, defense, isCrit);

        enemyHP -= damage;
        if (enemyHP < 0)
            enemyHP = 0;

        printCombatResults(round, damage, isCrit);

        displayHP(enemyHP, enemyMaxHP);
    }
}