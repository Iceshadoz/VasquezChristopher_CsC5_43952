/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 9
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int loan,insur,gas,oil,tires,main;
    
    cout<<"Enter the monthly loan amount of your vehicle"<<endl;
    cin>>loan;
    cout<<"Enter the monthly insurance amount of your vehicle"<<endl;
    cin>>insur;
    cout<<"Enter the monthly gas amount of your vehicle"<<endl;
    cin>>gas;
    cout<<"Enter the monthly oil amount of your vehicle"<<endl;
    cin>>oil;
    cout<<"Enter the monthly tires amount of your vehicle"<<endl;
    cin>>tires;
    cout<<"Enter the monthly maintenance amount of your vehicle"<<endl;
    cin>>main;
    
    int expense=loan+insur+gas+oil+tires+main;
    cout<<"Your monthly expenses is "<<expense<<endl;
    cout<<"Your yearly expenses is "<<expense*12<<endl;
    return 0;
}

