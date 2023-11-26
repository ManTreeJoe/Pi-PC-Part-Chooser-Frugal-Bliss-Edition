#include <iostream>
#include "storage.hpp"

using namespace std;

StorageList::StorageList()
{
    Storage = {"Seagate Barracuda Compute 2TB", "Samsung 980 Evo 2TB", "Corsair MP700 2TB"};

    StoragePrices = {60, 130, 240};
} 

array<string, 3> StorageList::getStorageList() const
{
    return Storage;
}
array<int, 3> StorageList::getStoragePrice() const
{
    return StoragePrices;
}