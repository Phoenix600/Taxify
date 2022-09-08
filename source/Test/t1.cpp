#include<iostream>
#include<string>
#include<vector>

using namespace std;


struct USR
{
    string user;
    int id;
};

struct TEST
{
    vector<string>* array;
    
};

struct TEST* test(struct TEST* t1)
{
    std::vector<string>* array = new std::vector<string>;

    // (*array).push_back("Hello");
    // (*array).push_back("This");
    // (*array).push_back("Pranay");
    // (*array).push_back("Ramteke");

    // std::cout << (*array)[0] << std::endl;
    // std::cout << (*array)[1] << std::endl;
    // std::cout << (*array)[3] << std::endl;

    return t1;
}

int main()
{
    struct TEST* T1 = (struct TEST*)malloc(sizeof(struct TEST));
    T1->array = new vector<string>;
    T1->array->push_back("Diya");
    T1->array->push_back("Pranay");
    string name =  T1->array->at(0);
    std::cout << "There is some magic in your name : " << name << std::endl;
    name = T1->array->at(1);
    std::cout << "There is something lovely you and me : " << name << std::endl;



    return 0;
}