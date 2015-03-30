/* 
 * File:   main.cpp
 * Author: c_vas_000
 * Created on March 30, 2015, 10:33 AM
 * Purpose:Chp4 Gaddis 7th Edition Homework.
 */

#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
        //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type 6 to solve problem 6"<<endl;
    cout<<"Type 7 to solve problem 7"<<endl;
    cout<<"Type 8 to solve problem 8"<<endl;
    cout<<"Type 9 to solve problem 9"<<endl;
    cout<<"Type 10 to solve problem 10"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice; 
    //Solve a problem that has been chosen.
    switch(choice){
        case '1':{
            int num1, num2;
        
            cout<<"Enter two number, and I'll determine which number is"
                  " larger and which number is smaller"<<endl;
            cout<<"Enter the first number"<<endl;
            cin>>num1;
            cout<<"Enter the second number"<<endl;
            cin>>num2;
            if(num1>num2){
                cout<<"Your first number("<<num1 << ") is larger than your "
                      "second number("<<num2<<")"<<endl;
            }else{
                cout<<"Your second number("<<num2 <<")  is larger than your"
                       " first number("<<num2<<")"<<endl;
            }
                break;
        }
        case '2':{
            int roman;
            cout<<"Enter a number from 1-10, and I'll give you its Roman"
                  "Numeral"<<endl;
            cin>>roman;
            if(roman<1 ^ roman>10){
                cout<<"Sorry, You didn't enter a whole number between 1-10"
                    <<endl;
            }else{
                switch(roman){
                    case 1:{
                        cout<<"The roman numeral is I"<<endl;
                        break;
                    }
                    case 2:{
                        cout<<"The roman numeral is II"<<endl;
                        break;
                    }
                    case 3:{
                        cout<<"The roman numeral is III"<<endl;
                        break;
                    }
                    case 4:{
                        cout<<"The roman numeral is IV"<<endl;
                        break;
                    }
                    case 5:{
                        cout<<"The roman numeral is V"<<endl;
                        break;
                    }
                    case 6:{
                        cout<<"The roman numeral is VI"<<endl;
                        break;
                    }
                    case 7:{
                        cout<<"The roman numeral is VII"<<endl;
                        break;
                    }
                    case 8:{
                        cout<<"The roman numeral is VIII"<<endl;
                        break;
                    }
                    case 9:{
                        cout<<"The roman numeral is IX"<<endl;
                        break;
                    }
                    case 10:{
                        cout<<"The roman numeral is X"<<endl;
                        break;
                    }
                    }
                }
            }
                break;
        case '3':{
            int magicD,magicM,magicY;
            cout<<"I'm going to determine if a date you enter is magic or "
                   "not. Please enter a Month in numerical format"<<endl;
            cin>>magicM;
            cout<<"Now enter a day"<<endl;
            cin>>magicD;
            cout<<"Now a two digit year"<<endl;
            cin>>magicY;
            if(magicD * magicM == magicY){
                cout<<"That date is magic!!!"<<endl;
            }else{
                cout<<"That date is not magic"<<endl;
            }
        }
                break;
        case '4':{
                
        }
                break;
        case '5':{
                
        }
                break;        
        case '6':{
                
        }
                break;
        case '7':{
                
        }
                break;
        case '8':{
                
        }
                break;
        case '9':{
                
        }
                break;
        case '10':{
                
        }
                break;
    }
    
    
    return 0;
}

