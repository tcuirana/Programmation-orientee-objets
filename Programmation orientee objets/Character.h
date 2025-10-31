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
	int stamina;
	std::vector<Items> inventory;


public :
	Character(const std::string& n, int h, int s)
		: name(n), health(h), stamina(s) {
	}
	~Character() {}

	void Display() const;
	
};
