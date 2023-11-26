#include <iostream>
#include "cooler.hpp"

using namespace std;

CoolerList::CoolerList()
{
    Cooler = {"Cooler Master Hyper 212 Black Edition", "Corsair H100i RGB Elite", "NZXT Kraken Z73 RGB"};

    CoolerPrices = {40, 110, 300};
} 

array<string, 3> CoolerList::getCoolerList() const
{
    return Cooler;
}
array<int, 3> CoolerList::getCoolerPrice() const
{
    return CoolerPrices;
}