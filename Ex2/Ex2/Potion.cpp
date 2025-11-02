#include <iostream>
#include "Potion.h"

void Potion::DisplayPotionStats() const {
	std::cout << name << " coute " << price << " et soigne " << heal << " points de vie." << std::endl;
}

