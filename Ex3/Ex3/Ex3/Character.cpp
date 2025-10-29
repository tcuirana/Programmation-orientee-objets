#include <iostream>
#include "Character.h"

void Character::AddItem(const Item& item) {
    inventory.push_back(item);
}

void Character::DisplayInventory() const {
    std::cout << "Inventaire de " << name << " :\n";
    for (const Item& i : inventory)
        i.Display();
}

void Character::TakeDamage(int dmg) {
    health -= dmg;
    std::cout << name << " subit " << dmg << " degats. PV restants : " << health << "\n";
}

void Character::Heal(int amount) {
    health += amount;
    std::cout << name << " se soigne de " << amount << " PV. PV actuels : " << health << "\n";
}