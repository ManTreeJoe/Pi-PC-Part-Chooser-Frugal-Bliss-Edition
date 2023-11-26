#ifndef GPU_HPP
#define GPU_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class GPUList
{
public:
   
   GPUList();

   array<string, 4> getGPUList() const;

   array<int, 4> getGPUPrice() const;

private:
   array<string, 4> GPU;
   array<int, 4> GPUPrices;
};
#endif