#include <iostream>
#include "Character.h"

void Character::DisplayStats() const {
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl;
}

//void Character::DisplayWarriorStats() const {}

//void Character::DisplayMageStats() const {}

//void Character::DisplayGoblinStats() const {}