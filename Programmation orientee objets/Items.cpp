#include "Items.h"
#include <iostream>

Items::Items(const char* n, int dmg)
	: name(n) , dmg(dmg){}

void Items::Display() {
	std::cout << name << " inflige " << dmg << " points de degats.";
}