#include <iostream>
#include <vector>
#include "Character.h"
#include "Potion.h"

int main() {
	Character* alchemist = new Character("Ambrosius", 100,100);	//création d'alchemist qui est un Character
	Character* player = new Character("Player", 75, 80);


	Potion* ppt = new Potion("Petite potion de soin", 20, 10);
	Potion* pt = new Potion("Potion de soin", 50, 25);
	Potion* gpt = new Potion("Grande potion de soin", 100, 50);

	std::vector<Potion*> etale;	//creation d'une liste 'etale' qui contient des Potion*
	etale.push_back(ppt);	//ajout de 'ppt' à la fin de la list etale
	etale.push_back(pt);	
	etale.push_back(gpt);


	std::cout << "Apres avoir terminez votre quete, vous vous rendez chez Alchimiste pour vous ravitaillez." << std::endl;

	std::cout << std::endl;

	player->Displaystats();	//appelle dela fonction de player

	std::cout << std::endl;

	std::cout << "L'alchimiste vend plusieurs potions de soin :" << std::endl;

	std::cout << std::endl;
	
	for (const auto& p : etale)	//Itere sur tous les elements de team et stocke l'element dans c a chaque iteration. (auto = type pris automatiquement selon le type de team (Character, int, float,...)).
		p->DisplayPotionStats(); //affiche tous ce qu'il y a dans la liste etale.
	
	std::cout << std::endl;

	std::cout << "Bonjour ";
	player->Displayname();
	std::cout << ",";

	std::cout << std::endl;

	std::cout << std::endl << "Que voulez vous acheter ?" << std::endl;
	std::cout << "1.Petite potion de soin" << std::endl;
	std::cout << "2.Potion de soin" << std::endl;
	std::cout << "3.Grande potion de soin" << std::endl << std::endl;

	std::vector<Potion*> player_inventory;
	
	int potionchoice;

	bool trade = false;

	while (trade == false) //tant que trade est faux, itérer
	{
		std::cin >> potionchoice;
		
		switch (potionchoice) //en fonction de potionchoice
		{
		case(1):

			if (player->Buy(ppt->Price()) == true) //quand le player veut acheter et que le prix de ppt n'est pas plus haut que price
			{
				player_inventory.push_back(ppt); 
				etale.erase(etale.begin());		//supprime le 1er élément[.begin()] de la list étale
				std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
				trade = true;
			}
			else
			{
				std::cout << "Vous n'avez pas assez !" << std::endl;
			}
			break;
		case(2):
			if (player->Buy(pt->Price()) == true)
			{
				player_inventory.push_back(pt);
				etale.erase(etale.begin() + 1);
				std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
				trade = true;
			}
			else
			{
				std::cout << "Vous n'avez pas assez !" << std::endl;
			}
			break;
		case(3):
			if (player->Buy(gpt->Price()) == true)
			{
				player_inventory.push_back(gpt);
				etale.erase(etale.begin() + 2);
				std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
				trade = true;
			}
			else
			{
				std::cout << "Vous n'avez pas assez !" << std::endl;
			}
			break;
		}
	}
	

	std::cout << "Il reste sur l'etale : " << std::endl << std::endl;

	for (const auto& p : etale)
		p->DisplayPotionStats();

	std::cout << std::endl;

	player->Displaystats();

	std::cout << std::endl;
	
	for (const auto& p : player_inventory) {
		std::cout << "Voulez vous utiliser votre ";	
		p->Displayname();
		std::cout << " ? (1.Oui/2.Non" << std::endl;
	}

	int choice;

	std::cin >> choice;

	if (choice == 1)
	{
		int heal = player_inventory[0]->Heal();
					//1er objet de la liste player_inventory
										//va chercher le Heal de l'objet
		player->Heal(heal);		//appelle de Heal avec le Heal de l'objet
		std::cout << "Vous avez fini votre journee." << std::endl;
		std::cout << std::endl;
		player->Displaystats();
	}
	else
	{
		std::cout << "Vous avez fini votre journee." << std::endl;
		
		std::cout << std::endl;

		player->Displaystats();
	}
}