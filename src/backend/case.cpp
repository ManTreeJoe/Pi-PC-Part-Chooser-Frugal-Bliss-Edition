#include <iostream>
#include "case.hpp"

using namespace std;

CaseList::CaseList()
{
    Case = {"Phanteks Eclpise G300A", "Lian Li O11 Dynamic EVO", "Corsair 7000D Airflow"};

    CasePrices = {70, 150, 230};
} 

array<string, 3> CaseList::getCaseList() const
{
    return Case;
}
array<int, 3> CaseList::getCasePrice() const
{
    return CasePrices;
}