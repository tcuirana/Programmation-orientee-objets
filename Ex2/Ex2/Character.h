#pragma once
#include <string>

class Character
{
protected:
	const std::string name;
	int hp;

public:
	Character(const std::string& n, int hp) : name(n), hp(hp) {}

	void Display() const;
};

