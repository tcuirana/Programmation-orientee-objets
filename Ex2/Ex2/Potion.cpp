#include <iostream>
#include "Potion.h"

void Potion::Display() const {
	std::cout << name << " soigne de " << heal << " points de vie." << std::endl;
}

