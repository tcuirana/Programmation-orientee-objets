#include <iostream>
#include "Mage.h"

void Mage::DisplayStats() const {
	std::cout << name << std::endl << healthPoint << "/" << maxHealthPoint << " HP" << std::endl << manaPoints << "/" << maxManaPoints << " MP" << std::endl;
}