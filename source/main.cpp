#include<iostream>
#include "include/Employee.h"

void UnitTestCode()
{
  struct Employee* E;
  E = setEmployeeData(120001,"Pranay Ramteke",1200000,90000,600000,200000,100000);
  E->gross_salary = 1234;
  E->payable_tax = 4567;
  displayEmployeeDetails(E);
}

int main()
{
  // Unit Test code Added Here 
  UnitTestCode();

  return 0;
}
