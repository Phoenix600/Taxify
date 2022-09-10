#ifndef READ_CSV_H
#define READ_CSV_H

// Include std namespaces here 
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

// Shorthand the std namespaces here 
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;
using std::ofstream;
using std::ifstream;
using std::vector;
using std::stringstream;
using std::fstream;

/// @brief An user-defined abstract data-type to work with the CSV files in C++.
/// @brief ReadCSV data type will allow to manupulate the csv files using the concepts of file handelling.
struct ReadCSV
{

    ifstream in;
    fstream FILE_IN;
    ofstream ou;
    string fname;
    vector<vector<string>> content; // 2-Dimensional vector to read the CSV files in tabular format
    vector<string> CSV_content;
};

/*
    #TODO:
        [x] Create the function which creates the READ CSv FILE obejct 
        [x] Create the function which reads the data from the CSV file
        [x] Create the function which outputs the data from the CSV file 
        [ ] Create the function which imports data from the CSV file and assigns 
            it to the Struct Employee Type Object. 
*/
/// @brief createCSVObject() return the struct ReadCSV* pointer or object 
/// @param void  Takes no parameter and returns the pointer of type struct ReadCSV*
struct ReadCSV* createCSVObject();



/// @brief Reads the CSV file and stores the data in the 2-d vector
/// @param struct struct ReadCSV* type pointer. 
/// @return void
void readCSV(struct ReadCSV* FILE);



void getCSVContent(struct ReadCSV* FILE);



#endif 