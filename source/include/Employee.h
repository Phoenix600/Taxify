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


//  #[x]: Funciton defined 

/// @brief Sets the data of the object of type Employee
/// @param struct struct Employee* E
void getEmployeeData(struct Employee* E);


// #[x] : Function defined 

/// @brief calculateGrossSalary() calculates the Gross Salary of the employee.
/// @param struct - Employee* E
void calculateGrossSalary(struct Employee* E);


// #[x] DisplayEmployeeDetails() function is defined 

/// @brief  displayEmployeeDetails() can be used to display the employee details.
/// @param struct Employee* E
void displayEmployeeDetails(struct Employee* E);


// #[x] define getEmployeeData() i source file 

/// @brief getEmployeeData() set data of employee object and returns object 
/// @param int ID  Employee ID 
/// @param string name  Name of Employee in string format  
/// @param float baseSalary Basic Salary of the employee
/// @param float DA Direct Ammount 
/// @param float HRA Housing Rental Allowance 
/// @param  float TA Travelling Allowance  
struct Employee* setEmployeeData(int ID,std::string name,float base_salary,float DA, float HRA, float TA, float incentives);


// [ ] calculateIncomeTax() defined in the Employee.cpp 

/// @brief Calculates the income-tax from the object and assigns the income-tax to the payable_tax var; 
/// @param struct struct Employee* E 
void calculateIncomeTax(struct Employee* E);



#endif 
