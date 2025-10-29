#include <iostream>
#include "Warrior.h"

void Warrior::AddItem(const Item& item) {
    inventory.push_back(item);
}

void Warrior::DisplayInventory() const {
    std::cout << "Inventaire de " << name << " :\n";
    for (const Item& i : inventory)
        i.Display();
}

void Warrior::TakeDamage(int dmg) {
    health -= dmg;
    std::cout << name << " subit " << dmg << " degats. PV restants : " << health << "\n";
}

void Warrior::Heal(int amount) {
    health += amount;
    std::cout << name << " se soigne de " << amount << " PV. PV actuels : " << health << "\n";
}
