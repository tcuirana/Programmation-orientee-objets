#pragma once
#include "Character.h"
#include <string>

class Mage : public Character 
{
private:
	int manaMax;

public:
	Mage(std::string n, int hp, int m) : Character(n,hp), manaMax(m) {}

	void Display();
};

