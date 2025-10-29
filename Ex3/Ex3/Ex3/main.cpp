#include "Character.h"
#include "Warrior.h"


int main() {
    Character hero("Arthur", 100);
    Warrior w("Bjorn", 110);

    Item sword("Epee de fer", 15);
    Item potion("Potion de soin", 50);

    hero.AddItem(sword);
    hero.AddItem(potion);

    hero.DisplayInventory();
    hero.TakeDamage(20);
    hero.Heal(10);

    w.AddItem(sword);
    w.AddItem(potion);

    w.DisplayInventory();
    w.TakeDamage(20);
    w.Heal(10);
    
    return 0;
}