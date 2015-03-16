/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 7
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    int calCook=75;//This is the calorie for one cookie(40/10=4 cookies per 300
    //calories. 300/4= 75 calories per cookie.)
    int numCook;
    
    cout<<"How many cookies did you eat from the cookie bag?"<<endl;
    cin>>numCook;
    cout<<"The total number of calories you ate is "<<numCook*calCook<<endl;
    return 0;
}

