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

	for (const auto& c : team) {		//Regarde chaque chose dans la liste team qui devient c mais une chose après l'autre par boucle.
		c.Display();					//Appelle de la fonction Display pour c
		std::cout << "" << std::endl;
	}

	//arthur.Display();
	
	Items sword("Epee", 10);
	sword.Display();

	return 0;
}