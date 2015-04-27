/* 
 * File:   main.cpp
 * Author: Christopher  Vasquez
 * Created on April 27, 2015, 8:18 AM
 * Chapter 6 Gaddis 7th Edition.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const float grav=9.8;

//Function Prototypes
int calRetl(float, float markup);//problem 1 whole and markup
double getLen(int length);//Problem 2 book says to USE double
double getWid(int width);//Problem 2 book says to USE double
int getArea(double length, double width);//Problem 2
int disData(double length, double width, double area);//Problem 2
float getSale();//Problem 3
void findHgh(float num1, float num2, float num3, float num4);//Problem 3
int getNum();//Problem 4
void findLow(int num1,int num2,int num3,int num4,int num5);//Problem 4
float fallObj(float time);//Problem 5 gravity
float kinEngy(float mass, float velocity);//Problem 6
int temptur(int faren);//Problem 7

//Execution begins here!
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
    cout<<"Type 11 to solve problem 11"<<endl;
    cout<<"Type 12 to solve problem 12"<<endl;
    cout<<"Type 13 to solve problem 13"<<endl;
    cout<<"Type 14 to solve problem 14"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    int choice;
    cin>>choice; 
    //Solve a problem that has been chosen.
    switch(choice){
        case 1:{
            float itmCost, mrkUp;
            cout<<"Welcome to problem 1. For this problem, I need to find an "
                <<"item's wholesale cost, and is markup percentage to figure "
                <<"out its total"<<endl;
            cout<<"Enter the items wholesale cost"<<endl;
            cin>>itmCost;
            while(itmCost<0){
            cout<<"input invalid, please enter another number greater than 0"
                <<endl;
            cin>>itmCost;
            }
            cout<<"Now enter the markup percentage"<<endl;
            cin>>mrkUp;
             while(mrkUp<0){
            cout<<"input invalid, please enter another number greater than 0"
                <<endl;
            cin>>mrkUp;
            }
            calRetl(itmCost, mrkUp);
                break;
        }
        case 2:{
            int length, width, area;
            cout<<"Welcome to problem 2. Please enter a length, width, and area"
                <<endl;
            cout<<"Please enter the length"<<endl;
            cin>>length;
            cout<<"Please enter the width"<<endl;
            cin>>width;
            getLen(length);
            getWid(width);
            getArea(length, width);
            area=getArea(length, width);
            disData(length, width, area);
                break;
        }
        case 3:{
            float salNum1,salNum2,salNum3,salNum4;
            cout<<"Welcome to problem 3, please enter the sales number and the"
                <<" name of the division"<<endl;
            salNum1=getSale();
            salNum2=getSale();
            salNum3=getSale();
            salNum4=getSale();
            findHgh(salNum1,salNum2,salNum3,salNum4);
            
                break;
        }
        case 4:{
            int acid1,acid2,acid3,acid4,acid5;
            cout<<"Welcome to problem 4. Please follow directions, and answer"
                <<" each response appropriately"<<endl;
            
            acid1=getNum();
            acid2=getNum();
            acid3=getNum();
            acid4=getNum();
            acid5=getNum();
            findLow(acid1,acid2,acid3,acid4,acid5);
                break;
        }
        case 5:{
            float time;
            cout<<"Welcome to problem 5, please enter a time to find out the "
                <<"distance an object has traveled"<<endl;
            cin>>time;
            fallObj(time);
            
            for(int i=0;i<=10;i++){
            time=i;
            fallObj(time);
            }
                break;
        }
        case 6:{
            float mass, velo;
            cout<<"Welcome to problem 6, I'm here to determine the kinectic"
                <<" energty an object has based on its mass and velocity"<<endl;
            cout<<"Please enter the onject's mass"<<endl;
            cin>>mass;
            cout<<"Please enter the object's velocity"<<endl;
            cin>>velo;
            kinEngy(mass, velo);
                break;
        }
        case 7:{
            int farenht;
            cout<<"Welcome to problem 7, I'm here to determine the Celsius of"
                <<" equivalent of a temperature that is given in Fahrenheit"
                <<endl;
            cout<<"What is the temperature you want to give in Fahrenheit?"
                <<endl;
            cin>>farenht;
            temptur(farenht);
            for(int i=0;i<=20;i++){
            farenht=i;
            temptur(farenht);
            }
                break;
        }
        case 8:{

                break;
        }
        case 9:{

                break;
        }
        case 10:{

                break;
        }
    return 0;
}
}
//Problem 1 function
int calRetl(float whleCst, float markup){
    markup=markup/100;
    float total=whleCst+(whleCst*markup);
    cout<<"Your total is "<<setprecision(2)<<fixed<<showpoint<<total<<endl;
    return total;
}
double getLen(int length){
    static_cast<double>(length);
    return length;
}
double getWid(int width){
    static_cast<double>(width);
    return width;
}
int getArea(double length, double width){
    double area=length*width;
    cout<<area<<endl;
    return area;
}
int disData(double length, double width, double area){
    cout<<"The rectangle's length "<<length<<endl;
    cout<<"The rectangle's width "<<width<<endl;
    cout<<"The rectangle's area "<<area<<endl;
}
float getSale(){
    string name;
    float number;
    cout<<"What is the name of the division?"<<endl;
    cin>>name;
    cout<<"sales number that division pulled?"<<endl;
    cin>>number;
    while(number<0){
          cout<<"input invalid, please enter another number greater than 0"
              <<endl;
          cin>>number;
    }
    cout<<"The name of he divisions is "<<name<<endl;
    cout<<"The sales figures that division pulled is "<<number<<endl;
    return number;
}
void findHgh(float num1, float num2, float num3, float num4){
    float high;
    if(num1>num2){
        high=num1;
    }else{
        high=num2;
    }
    if(high<num3){
        high=num3;
    }
    if(high<num4){
        high=num4;
    }
    cout<<"The highest sales number is "<<high<<endl;
    return ;
}
int getNum(){
    string name;
    int number;
    cout<<"What is the name of the region?"<<endl;
    cin>>name;
    cout<<"Number of accidents in that region?"<<endl;
    cin>>number;
    while(number<0){
          cout<<"input invalid, please enter another number greater than 0"
              <<endl;
          cin>>number;
    }
    cout<<"The name of region is "<<name<<endl;
    cout<<"Number of accidents in "<<name<<" is "<<number<<endl;
    return number;
}
 void findLow(int num1,int num2,int num3,int num4,int num5){
    int low;
    if(num1<num2){
       low=num1;
    }else{
       low=num2;
    }
    if(low>num3){
       low=num3;
    }
    if(low>num4){
       low=num4;
    }
    if(low>num5){
       low=num5;
    }
    cout<<"The Lowest number of accidents is "<<low<<endl;
    return ;
 }
 float fallObj(float time){
     float distan;
     distan= (0.5*grav)*(time*time);
     cout<<"The distance the object traveled in "<<time<<" seconds is "
         <<distan<<" meters"<<endl;
     
     return 0;
 }
  float kinEngy(float mass, float velocity){
     float KE;
     KE= (0.5*mass)*(velocity*velocity);
     cout<<"The Kinectic Energy the object produced is "<<KE<<" energy"
         <<endl;
     
     return 0;
 }
  int temptur(int faren){
      float celsius=(0.5/0.9)*(faren-32);
      cout<<"The celsius equivalent to "<<faren<<" is "<<setprecision(2)<<fixed
          <<showpoint<<celsius<<" degrees Celsius"<<endl;
      
  }