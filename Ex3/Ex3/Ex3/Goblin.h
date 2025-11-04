#pragma once
#include "Character.h"

class Goblin : public Character
{
private:

public:
	Goblin(const std::string& n) : Character(n,50,50) {}
	~Goblin(){}

	void DisplayStats() const override;
};

