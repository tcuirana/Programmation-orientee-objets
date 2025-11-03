#include <iostream>
#include "Character.h"
#include "Potion.h"

void Character::Displaystats() const{
	std::cout << name << " stats : " << std::endl << hp << "/100 hp." << std::endl << money << " pieces" << std::endl;
}

void Character::Displayname() const {
	std::cout << name;
}

bool Character::Buy(int price) {
	
	if (money >= price)
	{
		money = money - price;
		return true;
	}
	else
	{
		return false;
	}
}

void Character::Heal(int heal) {
	hp += heal;
}