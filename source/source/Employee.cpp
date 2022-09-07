#include "../include/Employee.h"
#include<iostream>
#include <string>

struct Employee* createEmployeeObject()
{
    struct Employee* E = (struct Employee*)malloc(sizeof(struct Employee));
    // Checking if the memory is exhausted or not 
    if(E == NULL)
        std::cout << "Heap memory is exhausted...\n";
    return E;
}

void getEmployeeData(struct Employee* E)
{
    std::cout << "[+]Enter the your name : ";
    std::getline(std::cin,E->name);
    std::cin.ignore();

    std::cout << "[+]Enter your ID : ";
    std::cin >> E->ID;

    std::cout << "[+]Enter your base salary : ";
    std::cin >> E->base_salary;

    std::cout << "[+]Enter Dearness Allowance :  ";  
    std::cin >> E->DA;

    std::cout << "[+]Enter Housing Rential Allowance : ";
    std::cin >> E->HRA;

    std::cout << "[+]Enter Travelance Allowance : ";
    std::cin >> E->TA;

    std::cout << "[+]Enter Incentives : ";
    std::cin >> E->incentives;
}


struct Employee* setEmployeeData(int ID,std::string name,float base_salary,float DA, float HRA, float TA, float incentives)
{
    // #FIXME :  While setting teh data in the Object make sure the memory in heap is allocated for the object  
    // #FIXED :  if the object is not crearted in heap then, moist likly you'll get the core-segmentation error
    struct Employee* E = createEmployeeObject();
    E->ID = ID;
    E->name = name;
    E->base_salary = base_salary;
    E->DA = DA;
    E->HRA = HRA;
    E->TA =  TA;
    E->incentives = incentives;

    return E;
}

void displayEmployeeDetails(struct Employee* E)
{
    std::cout << "Name          : " << E->name << std::endl;
    std::cout << "ID            : " << E->ID << std::endl;
    std::cout << "Base Salary   : " << E->base_salary << std::endl;
    std::cout << "HRA           : " << E->HRA << std::endl;
    std::cout << "TA            : " << E->TA << std::endl;
    std::cout << "Incentives    : " << E->incentives << std::endl;
    std::cout << "Gross Salary  : " << E->gross_salary << std::endl;
    std::cout << "Payalble Tax  : " << E->payable_tax << std::endl;
}