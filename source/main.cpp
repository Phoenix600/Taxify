#include<iostream>
#include "include/Employee.h"
#include "include/ReadCSV.h"
#include "include/PersonalData.h"


void UnitTestCode()
{
  // struct Employee* E = createEmployeeObject();
  struct Employee* E = setEmployeeData(1211,"Pranay Ramteke",12000000,600000,200000,600000,200000);
  calculateIncomeTax(E);
  displayEmployeeDetails(E);
  PrintIncomeTaxSheet(E);
}

int main()
{
  UnitTestCode();
  return 0;
}
