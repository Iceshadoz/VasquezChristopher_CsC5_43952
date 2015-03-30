/* 
 * File:   main.cpp
 * Author: c_vas_000
 * Created on March 30, 2015, 10:33 AM
 * Purpose:Chp4 Gaddis 7th Edition Homework.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    srand(time(0));
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
    int choice;
    cin>>choice; 
    //Solve a problem that has been chosen.
    switch(choice){
        case 1:{
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
        case 2:{
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
        case 3:{
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
        case 5:{
            unsigned int weight,height;
            cout<<"I'll determine your BMI, please enter your weight in"
                  " pounds."<<endl;
            cin>>weight;
            cout<<"Now enter your height in inches"<<endl;
            cin>>height;
            float bmi= static_cast<float>(weight*703)/(height*height);
            if(bmi <18.5){
                cout<<"Your BMI is "<<bmi<<", whivh is underweight"<<endl;
            }else if(bmi > 25.0){
                cout<<"Your BMi is "<<bmi<<", which is overweight"<<endl;
            }else{
                cout<<"Your BMI is "<<bmi<< ",which is normal"<<endl;
            }
            
        }
                break;
        case 6:{
            unsigned int mass;
            cout<<"I'll determine if if an object si too heavy or too light"
                  ". Please enter the object's mass"<<endl;
            cin>>mass;
            float newtons=static_cast<float>(mass*9.8);
            if(newtons > 1000){
                cout<<"That object of "<<newtons<<" newtons is too heavy"
                    <<endl;
            }else if(newtons <10){
                cout<<"That object of "<<newtons<<" newtons is too light"
                    <<endl;
            }else{
                cout<<"That object is just fine, it weighs "<<newtons<<
                      " newtons"<<endl;
            }
        }
                break;        
        case 4:{
            unsigned int triWid1, triLen1, triWid2, triLen2;
            cout<<"I'll calcuate the area of two triangles, and tell you which"
                    " area is greater"<<endl;
            cout<<"Please enter the first triangle's width"<<endl;
            cin>>triWid1;
            cout<<"Please enter the first triangle's length"<<endl;
            cin>>triLen1;
            cout<<"Please enter the second triangle's width"<<endl;
            cin>>triWid2;
            cout<<"Please enter the second triangle's length"<<endl;
            cin>>triLen2;
            unsigned int area1= triWid1*triLen1;
            unsigned int area2= triWid2*triLen2;
            if(area1==area2){
                cout<<"The areas of both triangles are the same!"<<endl;
            }else if(area1>area2){
                cout<<"The area of triangle 1is greater then the area of "
                      "triangle 2"<<endl;
            }else{
                cout<<"The area of triangle 2 is greater then the area of "
                     "triangle 1"<<endl;
            }
            
              
        }
                break;
        case 7:{
            unsigned int second;
            cout<<"Enter any numbers of seconds, and i'll tell you how many"
                   "minutes, hours, and days are equal to that many seconds"
                <<endl;
                    cin>>second;
            unsigned int minute= second/60;
            unsigned int hour= second/3600;
            unsigned int day= second/86400;
            if(second>=60){
            cout<<"Minutes: "<<minute<<endl;
            }
            if(second>=3600){
            cout<<"Hours: "<<hour<<endl;
            }
            if(second>=86400){
            cout<<"Days: "<<day<<endl;
            }
        }
                break;
        case 8:{
            unsigned int quarter, dime, penny, nickle;
            cout<<"I'll determine if you have an exact dollar amount with the"
                   " change you have. Please enter the number of quarters"
                <<endl;
            cin>>quarter;
            cout<<"Enter the number of dimes"<<endl;
            cin>>dime;
            cout<<"Enter the number of nickels"<<endl;
            cin>>nickle;
            cout<<"Enter the number of pennies"<<endl;
            cin>>penny;
            if((quarter*25)+(dime*10)+(nickle*5)+(penny)>100){
                cout<<"Your total is more than a dollar"<<endl;
            }else if((quarter*25)+(dime*10)+(nickle*5)+(penny)<100){
                cout<<"Your total is less than a dollar"<<endl;
            }else{
                cout<<"Congratulations, you won the dollar game!"<<endl;
            }
        }
                break;
        case 9:{
            unsigned int rNum1, rNum2, answer;
            rNum1 =rand() %500;
            rNum2 =rand() %500;
            cout<<rNum1<<endl;
            cout<<rNum2<<endl;
            cout<<"+"<<endl;
            cout<<"__________"<<endl;
            cout<<"What is the correct answeer?"<<endl;
            cin>>answer;
            if(answer == rNum1+rNum2){
                cout<<"Your answer is correct "<<endl;
            }else{
                cout<<"The correct answer is "<< rNum1 + rNum2<<endl;
            }
        }
                break;
        case 10:{
            unsigned int quanity;
            cout<<"How many unites are you buying?"<<endl;
            cin>>quanity;
            if(quanity>=10 && quanity<=19)
            {
                cout<<"The amount is owed is "<<quanity*99 - 
                        static_cast<float>(quanity *.2)*(99)<<endl;
            }else if(quanity>=10 && quanity<=49)
            {
                cout<<"The amount is owed is "<<quanity*99 - 
                        static_cast<float>(quanity *.3)*(99)<<endl;
            }else if(quanity>=50 && quanity<=99)
            {
                cout<<"The amount is owed is "<<quanity*99 - 
                        static_cast<float>(quanity *.4)*(99)<<endl;
            }else if(quanity>=100)
            {
                cout<<"The amount is owed is "<<quanity*99 - 
                        static_cast<float>(quanity *.5)*(99)<<endl;
            }else if(quanity>0)
            {
                cout<<"The amount is owed is "<<quanity*99<<endl;
            }else
            {
                cout<<"input not valid"<<endl;
            }
                break;
        }
    }
    
    
    return 0;
}

