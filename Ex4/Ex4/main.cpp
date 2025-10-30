#include <iostream>
#include "Character.h"
#include "Item.h"

int main()
{
	Character c("Arthur", 100);

	Item sword("Epee", 15, 10);

	sword.Display();
	c.Display();

	return 0;
}