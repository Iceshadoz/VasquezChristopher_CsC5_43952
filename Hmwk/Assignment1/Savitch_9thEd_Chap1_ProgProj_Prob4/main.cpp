/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 2, 2015, 9:03 AM
 * Purpose: Free fall problem from Savitch
 */

//system Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//user Libraries

//Global Constants
const float G=3.2174e1f;//Acceleration in ft/sec
const float CNVFTMT=3.048e-1f;//Conversion from ft to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //DEcalre variables
    flaot time,dstance;
    //prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time drop x.xx(seconds)"<<endl;
    cin>> time;
    //Calculate the distance
    dstnce=1/2*G*time;
    //Output the results
    cout<<"Distance fallen = " << dstnce<<" (feet) "<<endl;
    cout<<"Distance fallen = " << dstnce*CNVFTMT<<" (meters) "<<endl;
    //Exit stage right!
    return 0;
}

