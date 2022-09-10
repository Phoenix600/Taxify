/// Include C++ header files here 
#include<iostream>
#include<fstream>
#include<string>

// Include user defined header files here 
#include "../include/PersonalData.h"
#include "../include/Employee.h"


// define standard namespace here 
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::fstream;



void PrintIncomeTaxSheet(struct Employee* E)
{

// Opening the file in write mode inorder to avoid data-collison / Mix-up
fstream out("data/personal/"+ std::to_string(E->ID) +".txt",ios::out);

out << "########################################################\n"
    << "            INCOME TAX CALCULATOR RESULTS               \n"
    << "--------------------------------------------------------\n"
    << "[1] NAME        : " + E->name << "\n"
    << "[2] Employee ID : " << E->ID << "\n"
    << "[3] Base Salary : " << E->base_salary <<"\n"
    << "[4] DA          : " << E->DA << "\n"
    << "[5] HRA         : " << E->HRA << "\n"
    << "[6] TA          : " << E->TA << "\n"
    << "[7] Incentive   : " << E->incentives << "\n"
    << "--------------------------------------------------------\n"
    << "GROSS SALARY    : " << E->gross_salary << "\n"
    << "--------------------------------------------------------\n"
    << "Surcharge       : " << E->surcharge << "\n"
    << "CESS            : " << E->cess << "\n"
    << "Total TAX       : " << E->payable_tax << "\n"
    << "---------------------------------------------------------";

    out.close();

}