/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 4, 2015, 9:29 AM
 * Purpose: Chp 2 Homework
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int car = 12;
    int gal=350;
    
    float mpg=static_cast<float>(gal)/(car);
    
    cout<<"The MPG of the car is "<<mpg<<endl;

    return 0;
}

