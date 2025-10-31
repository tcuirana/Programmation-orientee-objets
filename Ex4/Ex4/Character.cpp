#include <iostream>
#include "Character.h"

void Character::Display() {
	std::cout << name << " a " << hpMax << " points de vie." << std::endl;
}

void Character::Heal() {
	health += 10;
	if (health > hpMax)
	{
		health == hpMax;
	}
}