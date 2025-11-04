#include <iostream>
#include "Warrior.h"

void Warrior::DisplayStats() const {
	//DisplayStats();
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl << stamina << "/" << maxStamina << " Stamina" << std::endl;
}