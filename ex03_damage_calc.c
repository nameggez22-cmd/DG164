#include <math.h>
#include <stdio.h>

int main()
{
    int player_attack, enemy_defense, hit_number;
    printf("Enter player attack: ");
    scanf("%d", &player_attack);
    printf("Enter enemy defense: ");
    scanf("%d", &enemy_defense);
    printf("Enter hit number: ");
    scanf("%d", &hit_number);

    int basedamage = player_attack - enemy_defense;
    int critical_damage = (int)ceil((float)basedamage * 1.5f);

    int damage;

    if (hit_number % 5 == 0)
    {
        damage = critical_damage;
        printf("Damage = %d *** CRITICAL HIT! x1.5 ***\n", damage);
    }
    else
    {
        damage = basedamage;
        printf("Damage: %d Normal Hit\n", damage);
    }

    return 0;
}