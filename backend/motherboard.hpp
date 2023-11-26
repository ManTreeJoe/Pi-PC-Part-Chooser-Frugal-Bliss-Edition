#ifndef MOTHERBOARD_HPP
#define MOTHERBOARD_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class MotherboardList
{
public:
   
   MotherboardList();

   array<string, 4> getMotherboardList() const;

   array<int, 4> getMotherboardPrice() const;

private:
   array<string, 4> Motherboard;
   array<int, 4> MotherboardPrices;
};
#endif