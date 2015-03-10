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
    float pSales = .62;
    int ECDSale = 4600000;
    float cTotal = ECDSale * pSales;
    cout << "The East Coast division will generate $" << cTotal << " in sale"
         <<endl;
    return 0;
}

