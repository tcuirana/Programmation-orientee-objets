#pragma once
#include <string>

class Character
{
protected:
	const std::string name;
	int hp;
	int money;

public:
	Character(const std::string& n, int hp, int m) : name(n), hp(hp), money(m) {}

	void Displaystats() const;
	void Displayname() const;
};

