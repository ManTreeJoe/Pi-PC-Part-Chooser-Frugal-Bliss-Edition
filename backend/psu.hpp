#ifndef POWERSUPPLY_HPP
#define POWERSUPPLY_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class PowerSupplyList
{
public:
   
   PowerSupplyList();

   array<string, 3> getPowerSupplyList() const;

   array<int, 3> getPowerSupplyPrice() const;

private:
   array<string, 3> PowerSupply;
   array<int, 3> PowerSupplyPrices;
};
#endif