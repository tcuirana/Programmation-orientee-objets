#include <iostream>
#include "Warrior.h"

void Warrior::DisplayStats() const {
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl << stamina << "/" << maxStamina << " Stamina" << std::endl;
}