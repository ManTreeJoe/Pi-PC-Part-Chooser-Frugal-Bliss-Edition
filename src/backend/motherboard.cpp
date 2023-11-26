#include <iostream>
#include "motherboard.hpp"

using namespace std;

MotherboardList::MotherboardList()
{
    Motherboard = {"B760-m Intel LGA 1700 Motherboard", "B650M AMD AM5 Motherboard", "Z790 Intel LGA 1700 Motherboard", "X670E AMD AM5 Motherboard"};

    MotherboardPrices = {120, 140, 300, 300};
} 

array<string, 4> MotherboardList::getMotherboardList() const
{
    return Motherboard;
}
array<int, 4> MotherboardList::getMotherboardPrice() const
{
    return MotherboardPrices;
}