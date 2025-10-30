#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Character
{
protected:
	std::string name;
	int hpMax;
	std::vector<Item> inventory;

public:
	Character(std::string n, int hp) : name(n), hpMax(hp) {}

	void Display();

};

