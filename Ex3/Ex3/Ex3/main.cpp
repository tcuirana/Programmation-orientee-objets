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
	
	w->DisplayStats();
	m->DisplayStats();
	g->DisplayStats();

	std::vector<Character*> team;
	team.push_back(w);
	team.push_back(m);

	//for(team)

	return 0;
}