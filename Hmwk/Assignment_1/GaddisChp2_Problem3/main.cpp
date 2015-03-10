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

    float sTax = .04;
    float cTax = .02;
    unsigned int saleP = 52;
    cout << "The purchase comes out to $" << ((sTax + cTax) * saleP) + saleP<< endl;
    
    return 0;
}

