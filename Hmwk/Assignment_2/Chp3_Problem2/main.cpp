/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 2
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int tickAP=15;
    unsigned int tickBP=12;
    unsigned int tickCP=9;
    unsigned int tickA, tickB, tickC;
    float tickTot;
    cout<<"How many class A tickets were sold?"<<endl;
    cin>>tickA;
    cout<<"How many class B tickets were sold?"<<endl;
    cin>>tickB;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>tickC;
    
    tickTot=(tickA*tickAP)+(tickB*tickBP)+(tickC*tickCP);
    cout<<"The total tickets sold $"<<setprecision(2)<<fixed<<showpoint
        <<tickTot<<endl;
    return 0;
}

