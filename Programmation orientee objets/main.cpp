#include <iostream>
#include "Character.h"
#include "Items.h"

int main()
{
	Character arthur("Arthur", 100, 100);
	Character morgane("Morgane", 100, 100);

	std::vector<Character>team;		//créer une liste de nom team qui peut contenir des Character.
	team.push_back(arthur);		//ou team.push_back(Character("Arthur", 100, 100) 
	team.push_back(morgane);	//ajoute le Character Arthur avec ses paramètres à la fin de la liste team.

	for (const auto& c : team) {		//Itere sur tous les elements de team et stocke l'element dans c a chaque iteration. (auto = type pris automatiquement selon le type de team (Character, int, float,...)).
		c.Display();					//Appelle de la fonction Display pour c
		std::cout << "" << std::endl;
	}
	
	Items sword("Epee", 10);
	Items ring("Anneau", 1);

	std::vector<Items>inventory;
	inventory.push_back(sword);
	inventory.push_back(ring);
	
	for (const auto& i : inventory) {
		i.Display();
		std::cout << "" << std::endl;
	}

	//sword.Display();

	return 0;
}