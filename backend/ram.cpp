#include <iostream>
#include "ram.hpp"

using namespace std;

RAMList::RAMList()
{
    RAM = {"TEAMGROUP Elite 16GB DDR5-4800", "Corsair Vengeance 32GB DDR5-6000", "Corsair Dominator Titanium 64GB DDR5-6400"};

    RAMPrices = {40, 100, 350};
} 

array<string, 3> RAMList::getRAMList() const
{
    return RAM;
}
array<int, 3> RAMList::getRAMPrice() const
{
    return RAMPrices;
}