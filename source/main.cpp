#include<iostream>
#include "include/Employee.h"

int main()
{
  // Tesing Code Added Here 
  Employee* E = createEmployeeObject();
  setEmployeeData(E);

  std::cout << E->name <<std::endl;
  std::cout << E->base_salary << std::endl;

  std::cout << E->DA << std::endl;
  std::cout << E->incentives << std::endl;
  std::cout << E->HRA << std::endl;

  return 0;
}
