#include <iostream>
#include <vector>
#include "Character.h"
#include "Potion.h"

int main() {
	Character alchemist("Ambrosius", 100,100);
	Character player("Player", 75, 80);

	Potion* ppt = new Potion("Petite potion de soin", 20, 10);
	Potion* pt = new Potion("Potion de soin", 50, 25);
	Potion* gpt = new Potion("Grande potion de soin", 100, 50);

	std::vector<Potion*> etale;
	etale.push_back(ppt);
	etale.push_back(pt);
	etale.push_back(gpt);


	std::cout << "Apres avoir terminez votre quete, vous vous rendez chez Alchimiste pour vous ravitaillez." << std::endl;

	std::cout << std::endl;

	player.Displaystats();

	std::cout << std::endl;

	std::cout << "L'alchimiste vend plusieurs potions de soin :" << std::endl;

	std::cout << std::endl;
	
	for (const auto& p : etale) //affiche tous ce qu'il y a dans la liste etale.
		p->DisplayPotionStats();
	
	std::cout << std::endl;

	std::cout << "Bonjour ";
	player.Displayname();
	std::cout << ",";

	std::cout << std::endl;

	std::cout << std::endl << "Que voulez vous acheter ?" << std::endl;
	std::cout << "1.Petite potion de soin" << std::endl;
	std::cout << "2.Potion de soin" << std::endl;
	std::cout << "3.Grande potion de soin" << std::endl << std::endl;

	int Potionchoice;
	std::cin >> Potionchoice;

	std::vector<Potion*> player_inventory;

	switch (Potionchoice)
	{
	case(1):
		player_inventory.push_back(ppt);
		etale.erase(etale.begin());
		std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
		break;
	case(2):
		player_inventory.push_back(pt);
		etale.erase(etale.begin()+1);
		std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
		break;
	case(3):
		player_inventory.push_back(gpt);
		etale.erase(etale.begin()+2);
		std::cout << std::endl << "Merci pour votre achat !" << std::endl << std::endl;
		break;
	}

	std::cout << "Ce qu'il reste sur l'etale : " << std::endl << std::endl;

	for (const auto& p : etale)
		p->DisplayPotionStats();

	std::cout << std::endl;

	std::cout << "Voulez vous utiliser votre ";	
	for (const auto& p : player_inventory)
		p->Displayname();
	std::cout << " ?" << std::endl;

	


}