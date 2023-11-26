#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class StorageList
{
public:
   
   StorageList();

   array<string, 3> getStorageList() const;

   array<int, 3> getStoragePrice() const;

private:
   array<string, 3> Storage;
   array<int, 3> StoragePrices;
};
#endif