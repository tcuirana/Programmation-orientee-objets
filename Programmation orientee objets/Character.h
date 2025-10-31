#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Items.h"

class Character
{
private:
	std::string name;
	int health;
	std::vector<Items> inventory;

public :
	Character(const std::string& n, int h)
		: name(n), health(h) {
	}

		

	void Display() const;
	void Heal() const;
};
