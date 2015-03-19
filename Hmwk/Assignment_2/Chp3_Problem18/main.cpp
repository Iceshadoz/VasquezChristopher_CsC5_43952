/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 18
 */

#include <iostream>
using namespace std;

//Global Constants
float const PI=3.14159;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int dia;
    cout<<"Please enter the diameter of the pizza(in inches) "<<endl;
    cin>>dia;
    
    float rad= static_cast<float>(dia)/2;
    float area=PI*static_cast<float>(rad*rad);
    int slice=area/14.125;
    cout<<"The number of slices is "<<slice<<endl;
    return 0;
}

