#include <iostream>
#include "Character.h"

void Character::Displaystats() const{
	std::cout << name << " stats : " << std::endl << hp << "/100 hp." << std::endl << money << " pieces" << std::endl;
}

void Character::Displayname() const {
	std::cout << name;
}