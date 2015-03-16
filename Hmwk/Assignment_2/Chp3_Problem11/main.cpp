/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 11
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    int dollar;
    cout<<"Enter the US dollar amount you wish to conver to Yen and Euros"
        <<endl;
    cin>>dollar;
    float yen=dollar*83.14;
    float euro=dollar*0.7337;
    cout<<"The conversion rate to yen is "<<setprecision(2)<<showpoint
        <<fixed<<yen<<endl;
    cout<<"The conversion rate to the Euro is "<<setprecision(2)<<showpoint
        <<fixed<<euro<<endl;
    return 0;
}

