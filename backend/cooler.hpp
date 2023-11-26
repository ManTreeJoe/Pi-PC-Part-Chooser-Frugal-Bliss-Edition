#ifndef COOLER_HPP
#define COOLER_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class CoolerList
{
public:
   
   CoolerList();

   array<string, 3> getCoolerList() const;

   array<int, 3> getCoolerPrice() const;

private:
   array<string, 3> Cooler;
   array<int, 3> CoolerPrices;
};
#endif