/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 9, 2015, 10:22 AM
 * Purpose: How much Candy Bars can I eat?
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//global constants

//function prototypes

//Execution begins in Function Main
int main(int argc, char** argv) {
    //Declare varibles
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem, BMRMale, nCBars;
    //Prompt the user for inpu
    cout<<"How many candy bars will it take to maintain your weight?"<<endl;
    cout<<"Input your weight"<<endl;
    cout<<"ALL inputs are integers!!!"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in yrs"<<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f? one character input"<<endl;
    cin>>mf;
    //Calculates
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8 *ageyrs;
    nCBars=mf=='m'?(BMRMale/cBar):(BMRFem/cBar);
    //Outpu the results
    cout<<"Your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<" (inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)" <<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per/day"<< endl;
    //Exit Stage right
    
    
     return 0;
}

