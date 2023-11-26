#include <iostream>
#include "gpu.hpp"

using namespace std;

GPUList::GPUList()
{
    GPU = {"Nvidia GeForce RTX 4060", "Radeon RX 7600", "Nvidia GeForce RTX 4090", "Radeon RX 7900 XTX"};

    GPUPrices = {300,250 , 2000, 1000};
} 

array<string, 4> GPUList::getGPUList() const
{
    return GPU;
}
array<int, 4> GPUList::getGPUPrice() const{
    return GPUPrices;
}