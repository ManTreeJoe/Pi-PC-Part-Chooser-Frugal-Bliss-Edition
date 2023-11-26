#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class CPUList
{
public:
   
   CPUList();

   array<string, 4> getCPUList() const;

   array<int, 4> getCPUPrice() const;

private:
   array<string, 4> CPUs;
   array<int, 4> CPUPrices;
};
#endif
