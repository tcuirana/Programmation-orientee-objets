#pragma once
#include "Character.h"

class Warrior : public Character
{
private:
	int stamina;
	int maxStamina;

public:
	Warrior(const std::string& n, int s, int ms) : Character(n, 100, 100), stamina(s), maxStamina(ms) {}
	~Warrior(){}

	void DisplayStats() const override;
};

