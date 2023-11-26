#include <iostream>
#include "cpu.hpp"

using namespace std;

CPUList::CPUList()
{
    CPUs = {"Intel i5-14600KF", "Ryzen 5-7600X", "Intel i9-14900KF", "Ryzen 9-7950X3D"};
    
    CPUPrices = {325, 210, 550, 575};
} 

array<string, 4> CPUList::getCPUList() const
{
    return CPUs;
}
array<int, 4> CPUList::getCPUPrice() const
{
    return CPUPrices;
}