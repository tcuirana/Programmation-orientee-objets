#include <iostream>
#include <vector>
#include "Warrior.h"
#include "Mage.h"
#include "Goblin.h"

int main()
{
	Character* w = new Warrior("Bjorn", 100, 100);
	Character* m = new Mage("Morgane", 100, 100);
	Character* g = new Goblin("Vrask");
	
	/*w->DisplayStats();
	m->DisplayStats();
	g->DisplayStats();*/

	std::cout << "Choisisez un personnage pour vous escorter ?" << std::endl << std::endl;

	std::vector<Character*> team;
	team.push_back(w); 
	team.push_back(m);

	for (const auto& t : team)	
		t->DisplayStats();

	char a[] = "";
	std::cin >> a;
	
	if (a == "Bjorn")
	{
		delete m;
	}
	else if (a == "Morgane")
	{
		delete w;
	}


	std::cout << "Durant votre voyage, un Goblin vous attaque." << std::endl << "Que doit faire " << a << " ?" << "1.Combattre / 2. Fuir" << std::endl;
	
	int b;
	std::cin >> b;

	if (b == 1)



	return 0;
}