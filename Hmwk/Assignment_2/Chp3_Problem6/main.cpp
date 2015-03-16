/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 6
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    float widget=9.2;
    float pallet;
    int numWid;//I went int here because I wanted an exact number of widgets,
    //also this round down even if its .99 of widget.
    
    cout<<"Enter the total weight the pallet can hold."<<endl;
    cin>>pallet;
    
    numWid=pallet/widget;
    
    cout<<"The total amount of widget a pallet can hold is "<<numWid<<endl;
    

    return 0;
}

