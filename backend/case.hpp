#ifndef CASE_HPP
#define CASE_HPP

#include <iostream>
#include <array>
#include <string>

using namespace std;
class CaseList
{
public:
   
   CaseList();

   array<string, 3> getCaseList() const;

   array<int, 3> getCasePrice() const;

private:
   array<string, 3> Case;
   array<int, 3> CasePrices;
};
#endif