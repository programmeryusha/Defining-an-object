#include <iostream>	
#include "Sally.hpp"  
using namespace std;

Sally::Sally() // this part is the constructor
{
	cout << "Hi. This is the constructo." << endl;
}

Sally::~Sally() 
{
    cout<< "what's up" << endl; //deconstructor
}