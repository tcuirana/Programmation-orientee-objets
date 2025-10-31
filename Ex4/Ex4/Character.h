#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Character
{
protected:
	std::string name;
	int hpMax;
	int health;
	std::vector<Item> inventory;

public:
	Character(const std::string n, int hp) : name(n), hpMax(hp), health(hp) {}



	void Display();
	void ItemDisplay();
	void Heal();

};

