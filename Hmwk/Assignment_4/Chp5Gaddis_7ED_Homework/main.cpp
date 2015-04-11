/* 
 * File:   main.cpp
 * Author: c_vas_000
 * Created on March 30, 2015, 10:33 AM
 * Purpose:Chp5 Gaddis 7th Edition Homework.
 */

#include <iostream>
#include <string>
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
    int choice;
    cin>>choice; 
    //Solve a problem that has been chosen.
    do{
    switch(choice){
        case 1:{
            int posNum,sumNUM;
            cout<<"Adding Problem"<<endl;//Problem 1
            cout<<"Please enter a positive integer"<<endl;
            cin>>posNum;
                while(posNum<0){
                cin>>posNum;
                cout<<"I'm sorry, your number is invalid, please try again"
                    <<endl;
            }
           
            for(int i=0;i<=posNum;i++){
                sumNUM=i+ sumNUM;
            }
            cout<<"You entered: "<<posNum<<". When you add all the the numbers"
                  " till then, you get: "<<sumNUM;
                break;
        }
        case 2:{
            cout<<"ACSII Codes 1-127. 16 per line"<<endl;//Problem 2
            for(int i=0;i<127;i++){
                cout<<(char) i;
                if(i%16==0){
                    cout<<endl;
                }
            }
                break;
        }
        case 3:{
            float table[25][2];
            cout<<"Rain Fall Problem"<<endl;//Problem 3
            cout<<"Years      Millimeters that year"<<endl;
            cout<<"-----      ---------------------"<<endl;
            for(int i=0.0;i<25.0;i++){
                    table[i][0]=i+1;
                    table[i][1]=1.5*i;
                    cout<<table[i][0]<<"               "<<table[i][1]<<endl;
            }
                break;
        }
        case 4:{
            float cal=3.9;
            cout<<"Calories Problem"<<endl;//Problem 4
            for(int i=10;i<=30;i++){
            if(i%5==0){
                cout<<cal*i<<"Calories Burned"<<endl;
            }   
            }
                break;
        }
        case 5:{
            cout<<"Country club membership Problem"<<endl;//Problem 5
            float club=2500;
            for(int i=1;i<=6;i++){
                club=club +(club*.04);
                cout<<"The price for year"<<i<<" is "<<club<<endl;
            }
                break;
        }
        case 6:{
            int hour,distnce;
            cout<<"Train MPH Problem"<<endl;//Problem 6
            cout<<"How long did the train travel?"<<endl;
            cin>>hour;
            while(hour<=0){
            cout<<"Invalid input, please try again"<<endl;
            cin>>hour;
            }
            cout<<"How far did the train travel?"<<endl;
            cin>>distnce;
            while(distnce<=0){
                cout<<"Invalid input, please try again"<<endl;
                cin>>distnce;
            }
            cout<<"Hours      Distance"<<endl;
            cout<<"-----      ---------------------"<<endl;
            for(int i=0.0;i<hour;i++){
                int train[i][2];
                    train[i][0]=i+1;
                    train[i][1]=distnce*(i+1);
                    cout<<train[i][0]<<"               "<<train[i][1]<<endl;
            }
                break;
        }
        case 7:{
            cout<<"Penny Problem"<<endl;//Problem 7
            int day;
            int penny=1;
      
            cout<<"If a penny can be doubled until X amount of days, please"
                <<" enter the amount of days you would like to see"<<endl;
            cin>>day;
            while(day<=0){
            cout<<"Input invalid, please try again"<<endl;
            cin>>day;
            }
            float arrayPD[day][2];
            cout<<"Days        $amount"<<endl;
            cout<<"-----       --------"<<endl;
            for(int i=1;i<=day;i++){
                arrayPD[i-1][0]=i;
                arrayPD[i-1][1]=static_cast<float>(penny)/100;
                cout<<arrayPD[i-1][0]<<"      $"<<arrayPD[i-1][1]<<endl;
                penny=static_cast<float>(penny)*2;
            }
                break;
        }
        case 8:{
            cout<<"Hotel Residency Problem"<<endl;//Problem 9
            int floors;
            float flTot,roomTot;
            cout<<"How many floors are in your hotel?"<<endl;
            cin>>floors;
            
            while(floors<=10){
            cin>>floors;
            cout<<"Input invalid, try again"<<endl;
            }
            float arrayFl[floors][2];
            for(int i=1;i<=floors;i++){
                if(i!=13){
                int flNum,roomOC;
                cout<<"Enter the amount of rooms on floor "<<i<<endl;
                cin>>flNum;
                flTot=flTot+flNum;
                arrayFl[i-1][0]=flNum;
                cout<<"How many are those are occupied?"<<endl;
                cin>>roomOC;
                roomTot=roomTot+roomOC;
                arrayFl[i-1][1]=roomOC;
                }else {
                    cout<<"No floors on 13!!!"<<endl;
                    arrayFl[13][0]=0;
                    arrayFl[13][1]=0;
                }
            }
            for(int i=0;i<floors;i++){
                cout<<"Floor "<<i+1<<" and "<<(arrayFl[i][1]/arrayFl[i][0])*100
                    <<"% of occupied, and "<<((arrayFl[i][0]-arrayFl[i][1])/
                    arrayFl[i][0])*100<<"% un occupied"<<endl;
            }
            cout<<"The totals are as followes:"<<endl;
            cout<<"Total Rooms: "<<flTot<<endl;
            cout<<"Total Occupied"<<roomTot<<" ("<<(roomTot/flTot)*100<<"%)"
                <<endl;
            cout<<"Total Unoccupied"<<flTot-roomTot<<" "<<((flTot-roomTot)/
                  flTot)*100<<"%)"<<endl;
            
                break;
        }
        case 9:{//Problem 22
            int userNum;
            cout<<"Enter a number and will give you a board of 'X' based on"
                  "number "<<endl;
            cin>>userNum;
            char arrayUs[userNum][userNum];
            for(int i=0;i<userNum;i++){
                for(int j=0;j<userNum;j++){
                    arrayUs[i][j]='X';
                    cout<<arrayUs[i][j];
                }
                cout<<arrayUs[i][i]<<endl;
            }
   
                break;
        }
        case 10:{//Problem 23
                string plus[10];
                plus[0]="+";
                /*
                plus[1]="++";
                plus[2]="+++";
                plus[3]="++++";
                plus[4]="++++++";
                plus[5]="+++++++";
                plus[6]="++++++++";
                plus[7]="+++++++++";
                plus[8]="++++++++++";
                plus[9]="+++++++++++";
                */
                for(int i=0;i<10;i++){
                 plus[i+1]=plus[i]+"+";
                //The code above was suppose to assign my array numbers, but
                //for some reason i'm getting a logic error. Something in my
                //Code is bugging it. I've tried copying and pasting the same 
                //snipet of code in a new document, and it ran succesful,
                //however, after running this loop, it displays the +s fine
                // but it comes back failed and wont run the second loop.
                cout<<plus[i]<<endl;
                }
                for(int i=9;i>=0;i--){
                    cout<<plus[i]<<endl;
                }
                break;
        }
        default:
            break;
    }
    
    }while(choice>10^choice<0);

    
    return 0;
}

