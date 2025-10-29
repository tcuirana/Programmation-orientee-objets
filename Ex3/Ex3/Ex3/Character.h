#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Character {
protected:
    std::string name;
    int health;
    std::vector<Item> inventory;

public:
    Character(const std::string& n, int h) : name(n), health(h) {}

    void AddItem(const Item& item);
    void DisplayInventory() const;

    void TakeDamage(int dmg);
    void Heal(int amount);
};