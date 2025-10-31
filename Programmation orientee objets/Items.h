#pragma once
#include <string>
class Items
{
public:
	std::string name;
	int damage;

	Items(std::string n, int d) : name(n), damage(d) {};

	void Display() const;
};

