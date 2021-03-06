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
#include <ctime>
#include <math.h>
#include <fstream>
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
int coinTos(int coin);//Problem 8
float presVal(float future, float intRate,int numYears);//Problem 9
void getScor(int &score );//Problem 10
void calAvg(int& score1,int& score2,int& score3,int& score4,int& score5);//Problem 10
int finLowe(int& score1,int& score2,int& score3,int& score4,int& score5);
bool isPrime(int num);//PRoiblem 21
void getJudgeData(int &score);//Problem 11
void calcSco(int& score1,int& score2,int& score3,int& score4,int& score5);
int finHigh(int& score1,int& score2,int& score3,int& score4,int& score5);
int numEmp();//Problem12
int days(int employ);
int calEmp(int empo, int day);

//Execution begins here!
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
            int coin;
            cout<<"Welcome to problem 8, please enter how many times you want "
                <<"toss the coin"<<endl;
            cin>>coin;
            coinTos(coin);
                break;
        }
        case 9:{
            float future, intRate;
            int numYear;
            cout<<"Welcome to problem 9, please enter the future rate you wish "
                <<"to see"<<endl;
            cin>>future;
            cout<<"Now enter your interest rate"<<endl;
            cin>>intRate;
            cout<<"Now the number of years you"<<endl;
            cin>>numYear;
            
            presVal(future, intRate, numYear);
                break;
        }
        case 10:{
            int score1,score2,score3,score4,score5;
            cout<<"Welcome to problem 10, please enter your test scores"<<endl;
            cout<<"Enter score one"<<endl;
            cin>>score1;
            cout<<"Enter score Two"<<endl;
            cin>>score2;
            cout<<"Enter score Three"<<endl;
            cin>>score3;
            cout<<"Enter score Four"<<endl;
            cin>>score4;
            cout<<"Enter score Five"<<endl;
            cin>>score5;
            getScor(score1);
            getScor(score2);
            getScor(score3);
            getScor(score4);
            getScor(score5);
            finLowe(score1,score2,score3,score4,score5);
            calAvg(score1,score2,score3,score4,score5);
                break;
        }
        case 11:{
            unsigned int prime;
            cout<<"Welcome to problem 21, please enter a digit, and i'll tell"
                <<" you if it's prime!"<<endl;
            cin>>prime;
            isPrime(prime);
            break;
        }
        case 12:{
            ofstream primefile;
            primefile.open("prime.txt");
            
            cout<<"Welcome to problem 22. This problem takes the function used "
                <<"in problem 21 to take all the prime numbers between one "
                <<"and 100, "<<endl;
                    for(int i=1;i<=100;i++){
                        isPrime(i);
                        if(isPrime(i)==true){
                        primefile << i <<" "<<endl;  
                        }
                        
                    }
            primefile.close();
            break;
        }
        case 13:{
            int judOne,judTwo,judTre,judFor,judFiv;
            
            cout<<"Welcome to problem 11. This problem takes five judges score,"
                  " drops the lowest and highest, and then averages the rest."
                  " use whole numbers"<<endl;//output can be decimal, but not inputs
            getJudgeData(judOne);
            getJudgeData(judTwo);
            getJudgeData(judTre);
            getJudgeData(judFor);
            getJudgeData(judFiv);
            calcSco(judOne,judTwo,judTre,judFor,judFiv);
            break;
        }
        case 14:{
            int day, employ;
            float calEmpl;
            cout<<"Welcome to problem 12, The employee absent day problem"
                <<endl;
            employ=numEmp();
            day=days(employ);
            calEmpl=calEmp(employ, day);
            cout<<"The average day missed per employee is "<<calEmpl;
            
        }
            
            break;
        }
        
    return 0;
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
     cout<<"The Kinetic Energy the object produced is "<<KE<<" energy"
         <<endl;
     
     return 0;
 }
  int temptur(int faren){
      float celsius=(0.5/0.9)*(faren-32);
      cout<<"The Celsius equivalent to "<<faren<<" is "<<setprecision(2)<<fixed
          <<showpoint<<celsius<<" degrees Celsius"<<endl;
      return 0;
  }
  int coinTos(int coin){
      srand(time(0));
      int heads;
      for(int i=0;i<=coin;i++){
          srand(time(0));
          heads=rand() % 1;
          if(heads==0){
              cout<<"The coin is heads!"<<endl;
          }else if(heads==1){
              cout<<"The coin is tails!"<<endl;
          }
      }
      return 0;
  }
  float presVal(float future, float intRate, int numYears){
      float present=(future)/pow((1+intRate),numYears);
      cout<<"The present value you must have is "<<present<<endl;
      return 0;
  }
  void getScor(int &score ){
         while(score<0&&score>100){
          cout<<"input invalid, please enter another number greater than 0"
              <<endl;
          cin>>score;
          return;
    }
  }
  void calAvg(int& score1,int& score2,int& score3,int& score4,int& score5){
     if(score1==200){
        score1=0;
     }
     if(score2==200){
        score2=0;
     }
     if(score3==200){
        score3=0;
     }
     if(score4==200){
        score4=0;
     }
     if(score5==200){
        score5=0;
     }
      float average=(score1+score2+score3+score4+score5)/4.0;
      cout<<"The average of the four scores is "<<average<<"%"<<endl;
      return;
  }
  int finLowe(int& score1,int& score2,int& score3,int& score4,int& score5){
    int low;
    if(score1<score2){
       low=score1;
    }else{
       low=score2;
    }
    if(low>score3){
       low=score3;
    }
    if(low>score4){
       low=score4;
    }
    if(low>score5){
       low=score5;
    }
    if(low==score1){
        score1=200;
    }
    if(low==score2){
        score2=200;
    }
    if(low==score3){
        score3=200;
    }
    if(low==score4){
        score4=200;
    }
    if(low==score5){
        score5=200;
    }
    return 0;
  }
  bool isPrime(int number){
      bool prime;
      if( number==2||number==3||number==5)
      {
          prime=true;
          cout<<"Looks like the number is prime!"<<endl;
      }
      else if(number%2==0||number%3==0||number%6==0||number%5==0){
          prime=false;
          cout<<"Looks like the number is NOT prime!"<<endl;
      }else{
          prime=true;
          cout<<"Looks like the number is prime!"<<endl;
      }
      
      return prime;
  }
  void getJudgeData(int&score){
      cout<<"Please enter this judge's score"<<endl;
      cin>>score;
      cout<<score<<endl;
      while(score<0||score>10){
         cout<<"Invalid score, please enter a correct score"<<endl;
         cin>>score;
      }
      
  }
 int finHigh(int& score1,int& score2,int& score3,int& score4,int& score5){
    int high;
    if(score1>score2){
       high=score1;
    }else{
       high=score2;
    }
    if(high<score3){
       high=score3;
    }
    if(high<score4){
       high=score4;
    }
    if(high<score5){
       high=score5;
    }
    if(high==score1){
        score1=200;
    }
    if(high==score2){
        score2=200;
    }
    if(high==score3){
        score3=200;
    }
    if(high==score4){
        score4=200;
    }
    if(high==score5){
        score5=200;
    }
    return 0;
  }
 void calcSco(int& score1,int& score2,int& score3,int& score4,int& score5){
            finHigh(score1,score2,score3,score4,score5);
            finLowe(score1,score2,score3,score4,score5);
     if(score1==200){
        score1=0;
     }
     if(score2==200){
        score2=0;
     }
     if(score3==200){
        score3=0;
     }
     if(score4==200){
        score4=0;
     }
     if(score5==200){
        score5=0;
     }
     int average=(score1+score2+score3+score4+score5)/3.0;

      cout<<"The average of the Three scores is "<<average<<endl;
      return;
  }
 int numEmp(){
     int employ;
     cout<<"Please enter the number of employees"<<endl;
     cin>>employ;
     while(employ<0){
         cout<<"Input invalid, pleas try a positive number"<<endl;
         cin>>employ;
     }
     return employ;
 }
 int days(int employ){
     int days,count;
     for(int i=1;i<=employ;i++){
         cout<<"Please enter the amount of days employee "<<i<<" missed"<<endl;
         cin>>count;
         days=days+count;
     }
     days=days-employ;
     return days;
 }
 int calEmp(int empo, int day){
     float calc=static_cast<float>(day)/static_cast<float>(empo);
     return calc;
 }