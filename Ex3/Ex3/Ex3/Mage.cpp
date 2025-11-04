#include <iostream>
#include "Mage.h"

void Mage::DisplayStats() const {
	//DisplayStats();
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl << manaPoints << "/" << maxManaPoints << " MP" << std::endl;
}