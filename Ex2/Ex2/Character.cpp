#include <iostream>
#include "Character.h"

void Character::Display() const{
	std::cout << name << std::endl << hp << " hp.";
}
