/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 4, 2015, 9:29 AM
 * Purpose: Chp 2 Homework
 */

#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float seaLvl;
    float inc = 1.5;
    
   
    cout << "The increase in sea level each year :" << endl;
    for(int i=0; i<=10; i++)
    {
        seaLvl = inc*i;
        cout << "Year" << i << ": " << seaLvl << endl;
    }
    return 0;
}

