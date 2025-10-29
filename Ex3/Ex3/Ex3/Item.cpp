#include "Item.h"

Item::Item(const std::string& n, int v) : name(n), value(v) {
}

void Item::Display() const {
    std::cout << name << " (valeur : " << value << ")\n";
}

int Item::GetValue() const { return value; }
std::string Item::GetName() const { return name; }
