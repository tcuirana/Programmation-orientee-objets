#include <iostream>
#include "Item.h"

void Item::Display() {
	std::cout << name << " vaut " << value << " et inflige " << damage << "." << std::endl;
}