#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Define essential header files here
#include <string>

/// @brief Employee data structure to represent the real world employee object 
struct Employee 
{
  std::string name;
  long int ID;
  float base_salary;
  float DA;
  float HRA;
  float TA;
  float incentives;
  float gross_salary;
  float payable_tax;
};


/// @brief Creates an struct Employee* object or pointer and return it.  
/// @param struct Employee*
struct Employee* createEmployeeObject();


/// @brief Sets the data of the object of type Employee
/// @param struct struct Employee* E
void setEmployeeData(struct Employee* E);


/// @brief Calculates the income-tax from the object and assigns the income-tax to the payable_tax var; 
/// @param struct struct Employee* E 
void calculateIncomeTax(struct Employee* E);


/// @brief  displayEmployeeDetails() can be used to display the employee details.
/// @param struct Employee* E
void displayEmployeeDetails(struct Employee* E);


/// @brief calculateGrossSalary() calculates the Gross Salary of the employee.
/// @param struct Employee* E
void calculateGrossSalary(struct Employee* E);


#endif 