#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Goblin.h"


void Space() 
{
    std::cout << " " << std::endl;
}

int main() {
    Character hero("Arthur", 100);
    Character* w = new Warrior ("Bjorn", 110);
    Character* m = new Mage ("Morgane", 90);
    Character* g = new Goblin("Nilbog", 30);

    //ITEMS
    Item knife("Couteau", 5);
    Item sword("Epee de fer", 15);
    Item mace("Masse d'armes", 20);
    Item ring("Anneau d'obsidienne", 30);
    Item Hpotion("Potion de soin", 50);
    Item Mpotion("Potion de mana", 40);

    //HERO
    hero.AddItem(sword);
    hero.AddItem(Hpotion);

    hero.DisplayInventory();
    hero.TakeDamage(20);
    hero.Heal(10);

    Space();

    //WARRIOR
    w->AddItem(mace);
    w->AddItem(Hpotion);

    w->DisplayInventory();
    w->TakeDamage(20);
    w->Heal(10);

    Space();


    //MAGE
    m->AddItem(ring);
    m->AddItem(Hpotion);
    m->AddItem(Mpotion);
    m->DisplayInventory();
    m->TakeDamage(30);
    m->Heal(10);

    Space();

    
    //GOBLIN
    g->AddItem(knife);
    g->DisplayInventory();
    g->TakeDamage(30);

    Space();


    return 0;
}