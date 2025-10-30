#include <iostream>
#include "Goblin.h"

void Goblin::AddItem(const Item& item) {
    inventory.push_back(item);
}

void Goblin::DisplayInventory() const {
    std::cout << "Inventaire de : " << name << " :\n";
    for (const Item& i : inventory)
        i.Display();
}

void Goblin::TakeDamage(int dmg) {
    health -= dmg;
    std::cout << name << " subit " << dmg << " degats. PV restants : " << health << "\n";
}

