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

    float meal = 44.50;
    float mTax = meal * .0675;
    float mlTotal = meal + mTax;
    float tip = (mlTotal * .15);
    cout << "The tax for the meal is $" << setprecision(2)<< mTax << endl;
    cout << "The meal cost is $" << setprecision(4) << mlTotal << endl;
    cout << "The tip amount is $" << setprecision(3) << tip << endl;
    
    return 0;
}

