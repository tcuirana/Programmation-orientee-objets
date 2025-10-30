#pragma once
#include <string>
#include <vector>
#include "Item.h"
#include "Character.h"

class Goblin : public Character
{
public:
	Goblin(const std::string& n, int h) : Character(n, h) {
	}

	void AddItem(const Item& item);
	void DisplayInventory() const;

	void TakeDamage(int dmg);
	void Heal(int amount);
};

