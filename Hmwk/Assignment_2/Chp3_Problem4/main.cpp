/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 3
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int month1,month2,month3;
    string nMonth1,nMonth2,nMonth3;
    float mAvg;
    
    cout<<"Please enter the name of the month you are recording for"<<endl;
    cin>>nMonth1;
    cout<<"Now enter the amount of rain that happened during that month"<<endl;
    cin>>month1;
    cout<<"Please enter the name of the month you are recording for"<<endl;
    cin>>nMonth2;
    cout<<"Now enter the amount of rain that happened during that month"<<endl;
    cin>>month2;
    cout<<"Please enter the name of the month you are recording for"<<endl;
    cin>>nMonth3;
    cout<<"Now enter the amount of rain that happened during that month"<<endl;
    cin>>month3;
    
    mAvg=static_cast<float>(month1+month2+month3)/3;
    cout<<"The average rainfall for "<<nMonth1<<", "<<nMonth2<<", "<<nMonth3
        <<" "<<setprecision(2)<<mAvg<<" inches"<<endl;
    return 0;
}

