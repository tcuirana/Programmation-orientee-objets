#include <iostream>
#include "Character.h"
	
Character::Character(const std::string& n, int h)
	: name(n), health(h) {
}

Character::Display(const string& n, int h) std::cout << name << " a " << health << " points de vie." << std::endl;
{}

void Character::Heal(Character& charac) const {
	 .heal += 10;
}