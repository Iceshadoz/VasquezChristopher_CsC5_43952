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

    float item1=12.95;
    float item2=24.95;
    float item3=6.95;
    float item4=14.95;
    float item5=3.95;
    
    float saleTot=item1+item2+item3+item4+item5;
    
    float saleTax=(item1+item2+item3+item4+item5)*.06;
    
    cout<<"Item 1 is $"<<item1<<endl;
    cout<<"Item 2 is $"<<item2<<endl;
    cout<<"Item 3 is $"<<item3<<endl;
    cout<<"Item 4 is $"<<item4<<endl;
    cout<<"Item 5 is $"<<item5<<endl;
    
    cout<<"The total of the items is $"<<saleTot<<endl;
    cout<<"The amount of sales tax is $"<<saleTax<<endl;
    cout<<"The total of the items is  $"<<saleTot+saleTax<<endl;
    return 0;
}

