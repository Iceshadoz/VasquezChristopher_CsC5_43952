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

    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;
    int sum = value1 + value2 + value3 + value4 + value5;
    float average =static_cast<float> (sum)/5;
    cout << "The sum of all five value is " << sum << endl;
    cout << "The average of all five values is " << average << endl;
    
    return 0;
}

