#include <iostream>
#include <vector>
#include "Character.h"
#include "Potion.h"

int main() {
	Character alchemist("Ambrosius", 100);
	Character player("Player", 75);

	alchemist.Display(); 
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	player.Display();

	std::cout << std::endl;
	std::cout << std::endl;

	Potion ptpt("Petite potion de soin", 20, 10);
	Potion pt("Potion de soin", 50, 25);
	Potion gpt("Grande potion de soin", 100, 50);

	std::vector<Potion> etale;
	etale.push_back(ptpt);
	etale.push_back(pt);
	etale.push_back(gpt);

	std::cout << "Apres avoir combattu vous vous rendez chez Alchimiste pour vous ravitaillez." << std::endl;
	
	

	std::cout << std::endl;
	
	for (const auto& p : etale)
		p.Display();


}