#include <iostream>
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

    array<string, 4> CPUArray = myCPU.getCPUList();

    cout << "== CPU LIST ==" <<  endl;

    for (const auto& cpu : CPUArray)
    {
        cout << cpu << endl;
    }

    // GPU
    GPUList myGPU;

    array<string, 4> GPUArray = myGPU.getGPUList();

    cout << "== GPU LIST ==" <<  endl;

    for (const auto& gpu : GPUArray)
    {
        cout << gpu << endl;
    }

    // MOTHERBOARD
    MotherboardList myMotherboard;

    array<string, 4> MotherboardArray = myMotherboard.getMotherboardList();

    cout << "== MOTHERBOARD LIST ==" <<  endl;

    for (const auto& motherboard : MotherboardArray)
    {
        cout << motherboard << endl;
    }

    // POWER SUPPLY
    PowerSupplyList myPowerSupply;

    array<string, 3> PowerSupplyArray = myPowerSupply.getPowerSupplyList();

    cout << "== POWER SUPPLY LIST ==" <<  endl;

    for (const auto& powersupply : PowerSupplyArray)
    {
        cout << powersupply << endl;
    }

    // MEMORY
    RAMList myRAM;

    array<string, 3> RAMArray = myRAM.getRAMList();

    cout << "== MEMORY LIST ==" <<  endl;

    for (const auto& ram : RAMArray)
    {
        cout << ram << endl;
    }

    // STORAGE
    StorageList myStorage;

    array<string, 3> StorageArray = myStorage.getStorageList();

    cout << "== STORAGE LIST ==" <<  endl;

    for (const auto& storage : StorageArray)
    {
        cout << storage << endl;
    }

    // CASE
    CaseList myCase;

    array<string, 3> CaseArray = myCase.getCaseList();

    cout << "== CASE LIST ==" <<  endl;

    for (const auto& cases : CaseArray)
    {
        cout << cases << endl;
    }

    // COOLER
    CoolerList myCooler;

    array<string, 3> CoolerArray = myCooler.getCoolerList();

    cout << "== COOLER LIST ==" <<  endl;

    for (const auto& cooler : CoolerArray)
    {
        cout << cooler << endl;
    }
}

