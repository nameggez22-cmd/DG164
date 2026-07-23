#include <stdio.h>

int main(void)
{
    int max_hp;
    int damage;
    int poisoned_input;
    _Bool is_poisoned;
    int attack_count;

    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    is_poisoned = poisoned_input;

    int hp = max_hp - damage;
    if (hp < 0)
    {
        hp = 0;
    }

    const char *state;
    if (hp <= 0)
    {
        state = "DEAD";
    }
    else if (hp * 100 < max_hp * 25)
    {
        state = "CRITICAL";
    }
    else if (is_poisoned)
    {
        state = "POISONED";
    }
    else
    {
        state = "NORMAL";
    }

    printf("=== Character Status ===\n");

    if (max_hp > 0)
    {
        int filled = hp * 10 / max_hp;
        if (filled < 0)
            filled = 0;
        if (filled > 10)
            filled = 10;

        printf("HP : [");
        for (int i = 0; i < 10; i++)
        {
            printf(i < filled ? "█" : "-");
        }
        printf("] %d/%d", hp, max_hp);
        if (state == "CRITICAL")
        {
            printf(" CRITICAL!");
        }
        printf("\n");
    }

    printf("State: %s\n", state);

    if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}
