#include <iostream>
#include "Character.h"

void Character::DisplayStats() const {
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl << std::endl;
}

