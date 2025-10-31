#include <iostream>
#include "Character.h"
#include "Mage.h"
#include "Item.h"

void Returnl()
{
	std::cout << "" << std::endl;
}

int main()
{
	Character a("Arthur", 100);
	Character* m = new Mage("Morgane", 80, 100);
	Item sword("Epee en fer", 15, 10);
	Item ring("Anneau en fer", 15, 10);

	a.Display();
	sword.ItemDisplay();

	Returnl();

	m->Display();
	ring.ItemDisplay();

	return 0;
}