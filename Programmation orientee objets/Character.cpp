#include "Character.h"
#include <iostream>
	
void Character::Display() const {
	std::cout << name << " a " << health << " points de vie." << std::endl;
}

void Character::Heal(Character& charac) const {
	 .heal += 10;
}