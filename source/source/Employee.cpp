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

void setEmployeeData(struct Employee* E)
{
    E->name = "Pranay";
    E->ID = 120001;
    E->base_salary = 1211100110.12;
    E->DA = 120000;
    E->TA = 130000;
    E->HRA = 101010;
    E->incentives = 40000;
    E->gross_salary = E->TA + E->DA + E->ID +  E->base_salary;
    E->payable_tax = 0;
}
