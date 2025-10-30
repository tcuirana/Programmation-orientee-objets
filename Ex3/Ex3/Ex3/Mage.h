#pragma once
#include <string>
#include <vector>
#include "Item.h"
#include "Character.h"

class Mage : public Character
{
public:
    Mage(const std::string& n, int h) : Character(n, h) {
    }

    void AddItem(const Item& item);
    void DisplayInventory() const;

    void TakeDamage(int dmg);
    void Heal(int amount);
};

