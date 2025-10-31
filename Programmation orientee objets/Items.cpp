#include "Items.h"
#include <iostream>

void Items::Display() const {
	std::cout << name << " inflige " << damage << " points de degats.";
}