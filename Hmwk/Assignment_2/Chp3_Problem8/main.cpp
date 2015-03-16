/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 8
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int home;
    float insur=0.8;
    cout<<"Enter the value of your structure. Round up or down to the nearest "
          "dollar amount"<<endl;
    cin>>home;
    cout<<"The amount of insurance you want to pay for is "<<home*insur<<endl;
    return 0;
}

