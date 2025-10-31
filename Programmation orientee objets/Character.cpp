#include <iostream>
#include "Character.h"
	
void Character::Display() const {
	std::cout << name << std::endl << "PV : " << health << std::endl << "Stamina : " << stamina << std::endl;
}
