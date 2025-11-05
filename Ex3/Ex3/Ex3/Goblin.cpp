#include <iostream>
#include "Goblin.h"

void Goblin::DisplayStats() const {
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl;
}