#pragma once
#include <iostream>
#include <string>

class Item {
private:
    std::string name;
    int value;

public:
    Item(const std::string& n, int v);
    void Display() const;
    int GetValue() const;
    std::string GetName() const;
};
