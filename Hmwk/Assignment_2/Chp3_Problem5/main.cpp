/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 5
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    string movie;
    unsigned int tickAP=6;
    unsigned int tickCP=3;
    unsigned int tickA, tickC;
    float tickAvg;
    
    cout<<"Hello, please enter the name the movie you wish to enter data for"
        <<endl;
    cin>>movie;
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>tickA;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>tickC;
    
    tickAvg=static_cast<float>(tickAP*tickA)+(tickCP*tickC);
    cout<<"The movie you choose is '"<<movie<<"'"<<endl;
    cout<<"Adult Tickets Sold: "<<tickA<<endl;
    cout<<"Child Tickets Sold: "<<tickC<<endl;
    cout<<"Gross Box Office Profit $"<<tickAvg<<endl;
    
    float tickNet=tickAvg*.2;
    cout<<"Net Box Office Profit $"<<setprecision(2)<<fixed<<showpoint
        <<tickNet<<endl;
    cout<<"Amount Paid to Distributor $"<<setprecision(2)<<fixed<<showpoint
        <<tickAvg-tickNet<<endl;
    return 0;
}

