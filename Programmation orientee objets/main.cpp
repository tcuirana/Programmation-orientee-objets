#include <iostream>
#include "Character.h"
#include "Items.h"

int main()
{
	Character charac("Thibaut", 100);
	charac.Display();
	
	Items item("Epee", 10);
	item.Display();

	return 0;
}