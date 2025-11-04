#pragma once
#include "Character.h"

class Mage : public Character
{
private:
	int manaPoints;
	int maxManaPoints;

public:
	Mage(const std::string& n, int mp, int mMP) : Character(n,80,80), manaPoints(mp), maxManaPoints(mMP) {}
	~Mage(){}

	void DisplayStats() const override;
};

