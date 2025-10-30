#pragma once
#include <string>

class Item
{
private:
	std::string name;
	int value;
	int damage;

public:
	Item(std::string n, int v, int d) : name(n), value(v), damage(d) {}

	void Display();
};

