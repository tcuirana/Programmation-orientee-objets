#pragma once
class Items
{
private:
	const char* name;
	int dmg;
public:
	Items(const char* n, int dmg);

	void Display();
};

