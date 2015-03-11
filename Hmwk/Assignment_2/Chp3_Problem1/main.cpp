/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 1
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int mile,tank;
    cout<<"Please enter how man gallongs your gas tank holds."<<endl;
    cin>>tank;
    cout<<"Now enter how many miles you cna drive on a full tank of gas"<<endl;
    cin>>mile;
    
    float mpg= static_cast<float>(mile)/(tank);
    cout<<"Your MPG is "<<mpg<<" MPG"<<endl;
    return 0;
}

