/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned int test1,test2,test3,test4,test5;
    float testAvg;
    cout<<"Please enter your score for test1"<<endl;
    cin>>test1;
    cout<<"Please enter your score for test2"<<endl;
    cin>>test2;
    cout<<"Please enter your score for test3"<<endl;
    cin>>test3;
    cout<<"Please enter your score for test4"<<endl;
    cin>>test4;
    cout<<"Please enter your score for test5"<<endl;
    cin>>test5;
    
    testAvg=static_cast<float>(test1+test2+test3+test4+test5)/5;
    cout<<"Your average test score on all of the test is "<<setprecision(1)
        <<fixed<<showpoint<<testAvg<<endl;
    
    return 0;
}

