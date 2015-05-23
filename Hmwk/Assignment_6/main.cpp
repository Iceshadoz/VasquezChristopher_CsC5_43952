/* 
 * File:   main.cpp
 * Author: christopher Vasquez
 * Created on May 22, 2015, 9:55 AM
 * Ch7,8,9 Gaddis
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std;
//Global Constants

//User Libraries

//Function Prototypes
void lrgShrt(int array[], int num);
void  rain(float array[]);
long binSrc(long array[], int num, long value);

//Execution Begins Here!
int main(int argc, char** argv) {
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
        case 1: 
            int array10[10];
            
            cout<<"Welcome to problem 1 The large and small array problem"
                <<" please enter 10 numbers "<<endl;
            for(int i=0;i<10;i++){
                cout<<"Enter the value for value "<<i<<endl;
                cin>>array10[i];
            }
            lrgShrt(array10,10);
            break;
        case 2:
            float rain12[12];
            float total,average;
            
            cout<<"Welcome to problem 2, The rainfall problem. Please enter "
                <<"The rainfall for each month"<<endl;
            for(int i=0;i<12;i++){
                cout<<"Enter the value for month"<<i+1<<endl;
                cin>>rain12[i];
                while(rain12[i]<0){
                    cout<<"Oops, you entered a negative number, please try "
                        <<"again"<<endl;
                    cin>>rain12[i];
                }
                    total+=rain12[i];                  
            }
            average=total/12;
            rain(rain12);
            cout<<"The average rainfall for all the months is: "<<average<<endl;
            break;
        case 3:{
            string salsa[5]={"mild","medium","sweet","hot","zesty"};
            int jars[5];
            for(int i=0;i<5;i++){
                cout<<"Enter the amount of jars for "<<salsa[i]<<endl;
                cin>>jars[i];
                while(jars[i]<0){
                    cout<<"Oops, you entered a negative number, please try "
                        <<"again"<<endl;
                    cin>>jars[i];
                }                  
            }
            int totJ;
            for(int i=0;i<5;i++){
                cout<<salsa[i]<<" sold: "<<jars[i]<<endl;
                totJ+=jars[i];

            }           
            lrgShrt(jars,5);
            cout<<"The total for all the jars is "<<totJ<<endl;
            break;
        }
        case 4:{ 
            string zoo[4][8]={{"","Mon","Tues","Wed","Thurs","Fri","Sat","Sun"},
                             {"Ape"   ,"","","","","","",""},
                             {"Chimp" ,"","","","","","",""},
                             {"Monkey","","","","","","",""}};
            float ttlZoo;
            int lrgZoo=0;
            int shrtZoo=100;
            cout<<"Welcome to Problem 4, the zoo problem. Please enter the "
                <<"amount of pounds of food each monkey eats a week"<<endl;
            
            for(int i=1;i<4;i++){
                int temp;
                for(int j=1;j<8;j++){
                    cout<<"Enter the amount of food for "<<zoo[i][0];
                    cout<<" on "<<zoo[0][j]<<endl;
                    cin>>temp;
                while(temp<0){
                    cout<<"Oops, you entered a negative number, please try "
                        <<"again"<<endl;
                    cin>>temp;
                };
                ttlZoo+=temp;
                if(lrgZoo<temp){
                    lrgZoo=temp;
                }
                if(shrtZoo>temp){
                    shrtZoo=temp;
                }
                zoo[i][j]=temp;
                }                  
            }
            cout<<"average amount of food eaten per day by the monkeys is "
                <<ttlZoo/21<<endl;
            cout<<"Great amount of food eaten in a day is: "<<lrgZoo<<endl;
            cout<<"Least amount of food eaten in a day is: "<<shrtZoo<<endl;
    
            break;
        }
        case 5: {
            int arryNum[15];
            int lrgNum=0;
            int shrtNum=100;
            float total;
            ifstream myfile;
            cout<<"Welcome to problem 5, the number analysis problem"<<endl;
            myfile.open("numbers.txt");
            for(int i=0;i<15;i++){
                myfile>>arryNum[i];
            }
            myfile.close();
            for(int i=0;i<15;i++){
                cout<<arryNum[i]<<endl;
                total=total+arryNum[i];
                if(lrgNum<arryNum[i]){
                    lrgNum=arryNum[i];
                }
                if(shrtNum>arryNum[i]){
                    shrtNum=arryNum[i];
                }
            }    
            cout<<"Greatest number in the array is: "<<lrgNum<<endl;
            cout<<"Shortest number in the array is: "<<shrtNum<<endl;
            cout<<"Total of Numbers in the array is: "<<total<<endl;
            cout<<"The average of numbers in the array is: "<<total/15.0<<endl;
            break;
        }
        case 6:{
            char rain[3][30];
            ifstream rainfile;
            cout<<"Welcome to problem 6, The rain or shine problem"<<endl;
            rainfile.open("rainOrShine.dat");
            for(int i=0;i<3;i++){
                for(int j=0;j<30;j++){
                    rainfile>>rain[i][j];
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<30;j++){
                    if(i==0){
                        cout<<"June "<<j<<" is ";
                    }
                    if(i==1){
                        cout<<"July "<<j<<" is ";
                    }
                    if(i==2){
                        cout<<"August "<<j<<" is ";
                    }
                    cout<<" "<<rain[i][j]<<endl;
                            
                }
            }
            
            
            break;
        }
        case 7:{
            char answers[20]={'B','D','A','A','C','A','B','A','C','D','B','C',
                              'D','A','D','C','C','B','D','A'};
            int wrong=0;
            char student[20];
            int prob [20];
            cout<<"Welcome to problem 7, the Driver's License Exam"<<endl;
            for(int i=0;i<20;i++){
                char temp;
                cout<<"Please enter the students answer for problem "<<i+1
                    <<endl;
                cin>>temp;
                while(temp!='a' && temp!='b' && temp!='c' &&
                   temp!='d'){
                    cout<<"Oops, input invalid, please try again"<<endl;
                    cin>>temp;
                }
                student[i]=toupper(temp);
            }
            for(int i=0;i<20;i++){
                if(answers[i]!=student[i]){
                    wrong++;
                    prob[i]=i;
                }else{
                    prob[i]=100;
                }
                   
            }
            cout<<"The total amount you got right was "<<20-wrong<<" out of "
                <<20<<endl;
            cout<<"The total amount you got wrong was "<<wrong<<endl;
            cout<<"The problems you got wrong were"<<endl;
            for(int i=0;i<20;i++){
                if(prob[i]!=100){
                cout<<"Problem "<<prob[i]+1<<endl;
                }
            }
    
            break;
        }
        case 8:{
            long acctNum[18]={5658845,4520125,7895122,8777541,8451277,1302850,
                              8080152,4562555,5552012,5050552,7825877,1250255,
                              1005231,6545231,3852085,7576651,7881200,4581002};
            long check;
            int check2;
            cout<<"Welcome to problem 8, the binary search problem"<<endl;
            cout<<"Please enter a 7 digit number and i will check the account "
                <<"number"<<endl;
            cin>>check;
            check2=binSrc(acctNum,18,check);
            if(check2==-1){
                cout<<"Sorry, your number was not found"<<endl;
            }else
                cout<<"Yes your number was found!"<<endl;
            break;
        }//I'm not sure why, but only certain numbers work.
        case 9:{
            int luck[10]={13579,26791,26792,33445,55555,62483,77777,79422,
                          85647,93121};
            int lucky, place=0;
            cout<<"Welcome to problem 9, The linear search problem"<<endl;
            cout<<"Please enter this week's lotto numbers and i'll see if you "
                <<"win"<<endl;
            cin>>lucky;
            for(int i=0;i<10;i++){
                if(lucky==luck[i]){
                    cout<<"Congratz, your numbers match"<<endl;
                    place=1;
                }
            }
            if(place==0){
                cout<<"Sorry you did not win"<<endl;
            }
            break;
        }
        case 10:
            long luck[10]={13579,26791,26792,33445,55555,62483,77777,79422,
                          85647,93121};
            long lucky,check2;
            cout<<"Welcome to problem 1, The binary search problem"<<endl;
            cout<<"Please enter this week's lotto numbers and i'll see if you "
                <<"win"<<endl;
            cin>>lucky;
            check2=binSrc(luck,10,lucky);
            if(check2==-1){
                cout<<"Sorry, your number was not found"<<endl;
            }else
                cout<<"Yes your number was found!"<<endl;
            
     }
    return 0;
}

void lrgShrt(int array[], int num){
    int large, shrt;
    for(int i=0; i<num;i++){
        if(large<array[i]){
            large=array[i];
        }
        if(shrt>array[i]){
            shrt=array[i];
        }
    }
    cout<<"The largest value is "<<large<<" and the shortest value is: "
        <<shrt<<endl;
}
void rain(float array[]){
    int large, shrt;
    for(int i=0; i<12;i++){
        if(large<array[i]){
            large=array[i];
        }
        if(shrt>array[i]){
            shrt=array[i];
        }
    }
    cout<<"The largest rainfall in a month is "<<large<<" and the shortest"
          "rainfall in a month value is: "<<shrt<<endl;  
    
        
}
long binSrc(long array[], int num, long value){
    long first = 0;
    long last = num - 1;
    long middle;
    long position = -1; 
    bool found = false;
    
    while (!found && first <= last){
        middle = (first + last) / 2; 
        if (array[middle] == value){
         found = true;
         position = middle;
        }
        else if (array[middle] > value){
            last = middle - 1;
        }
        else
        first = middle + 1; 
     }
    cout<<found;
    return position;
    }

 