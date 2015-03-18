/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 20
 */

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//Global Constants
float const PI=3.14159265;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    float number;
    cout<<"Enter a number(in radians) to determine the sine, cosine, and"
          " tangent of that angle"<<endl;
    cin>>number;
    cout<<"Cosine: "<<setprecision(4)<<showpoint<<fixed<<cos (number*PI/180)<<endl;
    cout<<"Sine: "<<setprecision(4)<<showpoint<<fixed<<sin (number*PI/180)<<endl;
    cout<<"Tangent "<<setprecision(4)<<showpoint<<fixed<<tan (number*PI/180)<<endl;
    return 0;
}

