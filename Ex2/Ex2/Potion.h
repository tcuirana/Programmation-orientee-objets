#pragma once
#include <string>

class Potion
{
private:
	const std::string name;
	int heal;

public:
	Potion(const std::string& n, int h) : name(n), heal(h){}

	void Display() const;
};

