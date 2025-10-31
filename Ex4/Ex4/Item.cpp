#include <iostream>
#include "Item.h"

void Item::ItemDisplay() {
	std::cout << name << " vaut " << value << " et inflige " << damage << "pts de degat." << std::endl;
}