#include <iostream>
#include "Goblin.h"

void Goblin::DisplayStats() const {
	//DisplayStats();
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl;
}