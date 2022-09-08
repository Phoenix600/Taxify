#include "../include/ReadCSV.h"


struct ReadCSV* createCSVObject()
{
    // Allocating the memory for the ReadCSV Node // Same statement can be implemented with 'new' opertor 
    struct ReadCSV* FILE = (struct ReadCSV*)malloc(sizeof(struct ReadCSV));
    if(FILE == NULL)
    {
        cout << "Heap Memory is exhausted..";
    }
    return FILE;
}

void readCSV(struct ReadCSV* FILE)
{
    // If user inputs the NULL pointer of type struct ReadCSV*
    if (FILE == NULL)
    {
        FILE = createCSVObject();
    }

    // declare essential variables here 
    string filename = "../data/sample.csv";
    vector<string> row;
    string line, word;
    stringstream SS;

    
    FILE->FILE_IN = fstream(filename,ios::in);

    if(FILE->FILE_IN.is_open())
    {
        
        while(std::getline(FILE->FILE_IN,line))
        {
            row.clear();
            stringstream SS(line);
            
            while(std::getline(SS,word,','))
            {
                row.push_back(word);
            }
            FILE->content.push_back(row);
        }

    }else{
        cout << "\n[X] Could not open the files....\n";
    }

}