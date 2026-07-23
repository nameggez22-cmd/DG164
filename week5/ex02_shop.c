#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int health_potion_price = 50;  /* +50 HP */
    int mana_potion_price = 80;    /* +30 MP */
    int iron_sword_price = 500;    /* +20 ATK */
    int leather_armor_price = 300; /* +15 DEF */
    int gold = 1000;
    int item_type1 = 0;
    int item_type2 = 0;
    int buy_second = 0;
    int price1 = 0;
    int price2 = 0;
    int cost = 0;
    int remaining_gold = gold;
    int bonus1 = 0;
    int bonus2 = 0;
    char item_name1[32] = "";
    char item_name2[32] = "";
    char bonus_name1[16] = "";
    char bonus_name2[16] = "";
    int warrior_bundle = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - %d Gold (+50 HP)\n", health_potion_price);
    printf("2. Mana Potion   - %d Gold (+30 MP)\n", mana_potion_price);
    printf("3. Iron Sword   - %d Gold (+20 ATK)\n", iron_sword_price);
    printf("4. Leather Armor - %d Gold (+15 DEF)\n", leather_armor_price);
    printf("5. Exit\n");
    printf("Select item: ");
    scanf("%d", &item_type1);

    if (item_type1 == 5)
    {
        printf("Goodbye!\n");
        return 0;
    }

    printf("Buy another item? (1 = yes, 0 = no): ");
    scanf("%d", &buy_second);
    if (buy_second == 1)
    {
        printf("Select second item: ");
        scanf("%d", &item_type2);
    }

    switch (item_type1)
    {
    case 1:
        price1 = health_potion_price;
        bonus1 = 50;
        strcpy(item_name1, "Health Potion");
        strcpy(bonus_name1, "HP");
        break;
    case 2:
        price1 = mana_potion_price;
        bonus1 = 30;
        strcpy(item_name1, "Mana Potion");
        strcpy(bonus_name1, "MP");
        break;
    case 3:
        price1 = iron_sword_price;
        bonus1 = 20;
        strcpy(item_name1, "Iron Sword");
        strcpy(bonus_name1, "ATK");
        break;
    case 4:
        price1 = leather_armor_price;
        bonus1 = 15;
        strcpy(item_name1, "Leather Armor");
        strcpy(bonus_name1, "DEF");
        break;
    default:
        printf("Invalid item selection. Please choose 1-5.\n");
        return 1;
    }

    if (buy_second == 1)
    {
        switch (item_type2)
        {
        case 1:
            price2 = health_potion_price;
            bonus2 = 50;
            strcpy(item_name2, "Health Potion");
            strcpy(bonus_name2, "HP");
            break;
        case 2:
            price2 = mana_potion_price;
            bonus2 = 30;
            strcpy(item_name2, "Mana Potion");
            strcpy(bonus_name2, "MP");
            break;
        case 3:
            price2 = iron_sword_price;
            bonus2 = 20;
            strcpy(item_name2, "Iron Sword");
            strcpy(bonus_name2, "ATK");
            break;
        case 4:
            price2 = leather_armor_price;
            bonus2 = 15;
            strcpy(item_name2, "Leather Armor");
            strcpy(bonus_name2, "DEF");
            break;
        default:
            printf("Invalid item selection. Please choose 1-5.\n");
            return 1;
        }

        if ((item_type1 == 3 && item_type2 == 4) ||
            (item_type1 == 4 && item_type2 == 3))
        {
            warrior_bundle = 1;
        }
    }

    cost = price1 + price2;
    if (warrior_bundle)
    {
        cost = cost * 90 / 100;
        printf("Warrior Bundle!\n");
    }

    if (remaining_gold < cost)
    {
        printf("Not enough gold!\n");
        return 1;
    }

    remaining_gold -= cost;

    printf("=== Purchase ===\n");
    printf("%s: %d Gold\n", item_name1, price1);
    if (buy_second == 1)
    {
        printf("%s: %d Gold\n", item_name2, price2);
    }
    printf("Total paid: %d Gold\n", cost);
    printf("Remaining Gold: %d\n", remaining_gold);
    printf("%s Bonus: +%d\n", bonus_name1, bonus1);
    if (buy_second == 1)
    {
        printf("%s Bonus: +%d\n", bonus_name2, bonus2);
    }
    printf("Item purchased successfully! ✓\n");

    return 0;
}
