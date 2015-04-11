/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 20
 */

#include <iostream>
#include <string>
using namespace std;

//Global Constants
float const PI=3.14159265;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
                string plus[10];
                plus[0]="+";
                for(int i=0;i<10;i++){
                    cout<<plus[i]<<endl;
                    plus[i+1]=plus[i]+"+";
                }
                for(int j=9;j>=0;j--){
                    cout<<plus[j]<<endl;
                }
    return 0;
}

