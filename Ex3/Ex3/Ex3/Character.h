#pragma once
#include <string>

class Character
{
protected:
	const std::string name;
	int healthPoint;
	int maxHealthPoint;

	int exp = 0;

public:
	Character(const std::string& n, int hp, int mhp) : name(n), healthPoint(hp), maxHealthPoint(mhp) {}
	virtual ~Character() {} 
	//virtual pour détruire aussi les classes enfants

	virtual void DisplayStats() const;
	
};

