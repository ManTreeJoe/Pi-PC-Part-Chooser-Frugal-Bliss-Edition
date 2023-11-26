#ifndef RAM_HPP
#define RAM_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class RAMList
{
public:
   
   RAMList();

   array<string, 3> getRAMList() const;

   array<int, 3> getRAMPrice() const;

private:
   array<string, 3> RAM;
   array<int, 3> RAMPrices;
};
#endif