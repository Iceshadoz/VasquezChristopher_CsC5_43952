/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 10
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    int celsi;
    cout<<"Enter the number of celsius so I can covert to Fahrenheit."<<endl;
    cin>>celsi;
    float faren=celsi*1.8+32;
    cout<<celsi<<" degrees celsius is converted to "<<faren<<" degrees"
                 " farhenheit"<<endl;
    return 0;
}

