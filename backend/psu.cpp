#include <iostream>
#include "psu.hpp"

using namespace std;

PowerSupplyList::PowerSupplyList()
{
    PowerSupply = {"EVGA 500 BR", "Corsair RM750X", "Corsair HX1200 Platinum"};

    PowerSupplyPrices = {70, 105, 380};
} 

array<string, 3> PowerSupplyList::getPowerSupplyList() const
{
    return PowerSupply;
}
array<int, 3> PowerSupplyList::getPowerSupplyPrice() const
{
    return PowerSupplyPrices;
}