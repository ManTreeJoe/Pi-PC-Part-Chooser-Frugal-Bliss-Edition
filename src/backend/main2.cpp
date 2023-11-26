#include <iostream>
#include <httplib.h>
#include <nlohmann/json.hpp>
#include "cpu.hpp"
#include "gpu.hpp"
#include "motherboard.hpp"
#include "psu.hpp"
#include "ram.hpp"
#include "storage.hpp"
#include "case.hpp"
#include "cooler.hpp"

using namespace std;
int main()
{
    // CPU
    CPUList myCPU;
    CPUList myCPUPrice;

    array<string, 4> CPUArray = myCPU.getCPUList();

    array<int, 4> CPUPriceArray = myCPUPrice.getCPUPrice();

    cout << endl << "== CPU LIST ==" <<  endl;

    for (const auto& cpu : CPUArray)
    {
        cout << cpu << endl;
    }
    cout << endl << "== CPU PRICES ==" << endl;

    for (const auto& cpuprice : CPUPriceArray)
    {
        cout << "$" << cpuprice << endl;
    }

    // GPU
    GPUList myGPU;
    GPUList myGPUPrice;

    array<string, 4> GPUArray = myGPU.getGPUList();
    array<int, 4> GPUPriceArray = myGPUPrice.getGPUPrice();

    cout << endl << "== GPU LIST ==" <<  endl;

    for (const auto& gpu : GPUArray)
    {
        cout << gpu << endl;
    }

    cout << endl << "== GPU PRICES ==" << endl;

    // MOTHERBOARD
    MotherboardList myMotherboard;
    MotherboardList myMotherboardPrice;

    array<string, 4> MotherboardArray = myMotherboard.getMotherboardList();
    array<int, 4> MotherboardPriceArray = myMotherboardPrice.getMotherboardPrice();

    cout << endl << "== MOTHERBOARD LIST ==" <<  endl;

    for (const auto& motherboard : MotherboardArray)
    {
        cout << motherboard << endl;
    }

    cout << endl << "== MOTHERBOARD PRICES ==" << endl;

    for (const auto& motherboardprice : MotherboardPriceArray)
    {
        cout << "$" << motherboardprice << endl;
    }

    // POWER SUPPLY
    PowerSupplyList myPowerSupply;
    PowerSupplyList myPowerSupplyPrice;

    array<string, 3> PowerSupplyArray = myPowerSupply.getPowerSupplyList();
    array<int, 3> PowerSupplyPriceArray = myPowerSupplyPrice.getPowerSupplyPrice();

    cout << endl << "== POWER SUPPLY LIST ==" <<  endl;

    for (const auto& powersupply : PowerSupplyArray)
    {
        cout << powersupply << endl;
    }

    cout << endl << "== POWER SUPPLY PRICES ==" << endl;

    for (const auto& powersupplyprice : PowerSupplyPriceArray)
    {
        cout << "$" << powersupplyprice << endl;
    }

    // MEMORY
    RAMList myRAM;
    RAMList myRAMPrice;

    array<string, 3> RAMArray = myRAM.getRAMList();
    array<int, 3> RAMPriceArray = myRAMPrice.getRAMPrice();

    cout << endl << "== MEMORY LIST ==" <<  endl;

    for (const auto& ram : RAMArray)
    {
        cout << ram << endl;
    }

    cout << endl << "== MEMORY PRICES ==" << endl;

    for (const auto& ramprice : RAMPriceArray) 
    {
        cout << "$" << ramprice << endl;
    }

    // STORAGE
    StorageList myStorage;
    StorageList myStoragePrice;

    array<string, 3> StorageArray = myStorage.getStorageList();
    array <int, 3> StoragePriceArray = myStoragePrice.getStoragePrice();

    cout << endl << "== STORAGE LIST ==" <<  endl;

    for (const auto& storage : StorageArray)
    {
        cout << storage << endl;
    }

    cout << endl << "== STORAGE PRICES ==" << endl;

    for (const auto& storageprice : StoragePriceArray)
    {
        cout << "$" << storageprice << endl;
    }

    // CASE
    CaseList myCase;
    CaseList myCasePrice;

    array<string, 3> CaseArray = myCase.getCaseList();
    array<int, 3> CasePriceArray = myCasePrice.getCasePrice();

    cout << endl << "== CASE LIST ==" <<  endl;

    for (const auto& cases : CaseArray)
    {
        cout << cases << endl;
    }

    cout << endl << "== CASE PRICES ==" << endl;

    for (const auto& caseprice : CasePriceArray)
    {
        cout << "$" << caseprice << endl;
    }

    // COOLER
    CoolerList myCooler;
    CoolerList myCoolerPrice;

    array<string, 3> CoolerArray = myCooler.getCoolerList();
    array<int, 3> CoolerPriceArray = myCoolerPrice.getCoolerPrice();

    cout << endl << "== COOLER LIST ==" <<  endl;

    for (const auto& cooler : CoolerArray)
    {
        cout << cooler << endl;
    }

    cout << endl << "== COOLER PRICES ==" << endl;

    for (const auto& coolerprice : CoolerPriceArray)
    {
        cout << "$" << coolerprice << endl;
    }
}

