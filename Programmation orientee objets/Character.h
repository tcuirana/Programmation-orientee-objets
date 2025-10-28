#pragma once
#include <iostream>
#include <vector>
#include "Items.h"

class Character
{
private:
	const char* name;
	int health;

public :
	Character(const char* n, int h);

	std::vector<Items> inventory;

	void Display();
};
