/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on March 11, 2015, 9:13 AM
 * Purpose: Chp3 Gaddis Homework problem 22
 */

#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    string name,age,city,college,prof,animal,pName;
    cout<<"Please enter your name"<<endl;
    cin>>name;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    cout<<"Please enter a name of a city"<<endl;
    cin>>city;
    cout<<"Please enter a name of a college"<<endl;
    cin>>college;
    cout<<"Please enter a profession"<<endl;
    cin>>prof;
    cout<<"Please enter a type of animal"<<endl;
    cin>>animal;
    cout<<"Please enter a pet's name"<<endl;
    cin>>pName;
    cout<<"There once was a person named "<<name<<" who lived in "<<city
        <<". At the age of "<<age<<", "<<name<<" went to college at "
        <<college<<". "<<endl;
    cout<<name<<" graduated and went to work as a "<<prof
        <<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<pName
        <<". They both"<<endl;
    cout<<"lived happily ever after."<<endl;
    return 0;
}

