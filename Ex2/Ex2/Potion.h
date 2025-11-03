#pragma once
#include <string>

class Potion
{
private:
	const std::string name;
	int price;
	int heal;

public:
	Potion(const std::string& n, int p, int h) : name(n), price(p), heal(h){}
	~Potion(){}

	void DisplayPotionStats() const;
	void Displayname() const;
};

