#include "Character.h"
#include <iostream>

Character::Character(const char* n, int h) 
	: name(n), health(h){}

void Character::Display() {
	std::cout << name << " a " << health << " points de vie." << std::endl;
}
