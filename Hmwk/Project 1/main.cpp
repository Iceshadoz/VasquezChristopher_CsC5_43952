/*
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on May 7, 2015, 8:14 PM
 * Purpose: Project 1
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void win(int bet, int schips);//output if you win
int zero(int &zero);//double zero function
//Execution begins here+
int main(int argc, char** argv) {
    string menu;
    string back = "yes";
    int schips;
    ifstream infile;//Takes the number from chips.txt. Default is 1000
    infile.open("chips.txt");
    infile>>schips;
    infile.close();
    do
    {
        // variables and array
        int bet;
        srand(time(0));
        int choice;
        int number;
        int rand1 = rand()%37;
        int red [] = {1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
        int blk [] = {2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};
        int row1[] = {1,2,3};
        int row2[] = {4,5,6};
        int row3[] = {7,8,9};
        int row4[] = {10,11,12};
        int row5[] = {13,14,15};
        int row6[] = {16,17,18};
        int row7[] = {19,20,21};
        int row8[] = {22,23,24};
        int row9[] = {25,26,27};
        int row10[] = {28,29,30};
        int row11[] = {31,32,33};
        int row12[] = {34,35,36};
        //prompt the user
        cout<<"Welcome to roulette! We start off this game by giving you 1000"
              " chips. Out of the 1000, please enter the amount you wish to"
              " bet with."<<endl;        
        cin>>bet;
        schips -= bet; //minus starting chips with bet
        cout<<"Ok, now that you gave us money, type one of the following "
              " options you wish to wager on."<<endl;
        cout<<"1. Single Bet. Payout: 35:1"<<endl;
        cout<<"2. Column. Payout: 2:1"<<endl;
        cout<<"3. Six Row. Payout: 1:1"<<endl;
        cout<<"4. Four Row. Payout: 2:1"<<endl;
        cout<<"5. Single Row. Payout: 5:1"<<endl;
        cout<<"6. Red/Black. Payout: 1:1"<<endl;
        cout<<"7. Even Odd. Payout: 1:1"<<endl;
        cin>>choice;
            switch(choice)
            {
                case 1: // single bet
                    //prompt the user
                    cout<<"You chose Single Bet. Now enter a number between"
                          " 0-35.If you want to bet on 00, please enter"
                          " 0 ONCE"<<endl;
                    cin>>number;
                    
                    if (number == 0) //determining double 0 or just 0.
                        {
                        cout<<"Enter Z'0' again for double zero, or enter"
                                " '1' for single zero"<<endl;
                        cin>>number;
                            if (number == 1)
                             {
                            number = 0;
                             }
                             else
                             {
                            number = 37; //this is acting as double 00
                             }
                        }
                    else
                    {
                    }
                    cout<<"The roulette spun a "<<rand1<<endl;
                    
                    if ( number == rand1)
                    {
                    bet *=36;
                    schips += bet;
                    win(bet,schips);
                    }
                    else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;  
                    }                
                    break;
                     
                case 2: // Column bet
                    //prompt the user
                    cout<<"You Choose Columns. Now pick either column 1,2"
                            "and 3."<<endl;
                    cin>>number;
                    zero(rand1);
                    
                    if (rand1 == 37|| rand1==0)
                    {
                    cout << "You lose! You now have "<<schips<<endl;
                    }else if ((rand1 %3) != (number %3))
                    {
                    cout<<"You lose! You now have  "<<schips<<endl;
                    }else 
                    {
                        bet *= 3;
                    schips +=bet;
                    win(bet,schips);
                    }
                     break;
                       
                case 3: // Six Row
                    //prompt the user
                    cout<<"You Choose Six Row. Now choose '1' from 1-18 for the"
                          " first row, or '2' between 19-36 for the second"
                          " set."<< endl;
                    cin>>number;
                    zero(rand1);
                    
                    if (rand1 == 37|| rand1==0)
                    {
                    cout<<"You lose! You now have "<<schips<<endl;  
                    }else if(number == 1 && rand1 < 19)
                    {
                    bet += bet;
                    schips += bet;
                    win(bet,schips);
                    }else if(number == 2 && rand1 >18)
                    {
                    bet += bet;
                    schips += bet;
                    win(bet,schips);
                    }else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;  
                    }
                     break;
                     
                case 4: // Four row
                    //prompt the user
                    cout<<"You Choose Four Row. Now choose a number from 1-12"
                          " for the first set, 13-24 for the second set."<<endl;
                    cout<<"Select 25-36 for the last set of rows."<<endl;
                    cin>>number;
                    zero(rand1);
                    
                    if (rand1 == 37|| rand1==0)
                    {
                    cout<<"You lose! You now have "<<schips<<endl;  
                    }else if (rand1 <= 12 && number <= 12)
                    {
                    bet *= 3;
                    schips += bet;
                    win(bet,schips); 
                    }else if ((rand1 >12 && rand1 <= 24) && (number >12 &&
                            number <=24))
                    {
                    bet *= 3;
                    schips += bet;
                    cout << "Well you win "  << bet << " for a total chip count"
                            " of "<<  schips << ". Now scram!" << endl;     
                    }else if(rand1 >24 && number >24)
                    {
                    bet *= 3;
                    schips += bet;
                    win(bet,schips);    
                    }else
                    {
                    cout<<"You lose! You now have "<<schips <<endl;     
                    }
                     break;
                     
                case 5: // Single Row
                    //prompt the user
                    cout<< "You Choose Single Row. Enter a number to the "
                            " corresponding section of numbers you want to"
                            " wager on. "<< endl;
                    cout<<"1. 1-3 "<<endl;
                    cout<<"2. 4-6 "<<endl;
                    cout<<"3. 7-9 "<<endl;
                    cout<<"4. 10-12 "<<endl;
                    cout<<"5. 13-15 "<<endl;
                    cout<<"6. 16-18 "<<endl;
                    cout<<"7. 19-21 "<<endl;
                    cout<<"8. 22-24 "<<endl;
                    cout<<"9. 25-27 "<<endl;
                    cout<<"10. 28-30 "<<endl;
                    cout<<"11. 31-33 "<<endl;
                    cout<<"12. 34-36 "<<endl;
                    cin>>number;
                    zero(rand1);
                    
                    if (number == 1 && rand1==row1[0] || 
                        number == 1 && rand1==row1[1] ||
                        number == 1 && rand1==row1[2] ||
                        number == 2 && rand1==row2[0] ||
                        number == 2 && rand1==row2[1] ||
                        number == 2 && rand1==row2[2] ||
                        number == 3 && rand1==row3[0] ||
                        number == 3 && rand1==row3[1] || 
                        number == 3 && rand1==row3[2] ||
                        number == 4 && rand1==row4[0] ||
                        number == 4 && rand1==row4[1] ||
                        number == 4 && rand1==row4[2] ||
                        number == 5 && rand1==row5[0] ||
                        number == 5 && rand1==row5[1] ||
                        number == 5 && rand1==row5[2] || 
                        number == 6 && rand1==row6[0] ||
                        number == 6 && rand1==row6[1] ||
                        number == 6 && rand1==row6[2] ||
                        number == 7 && rand1==row7[0] ||
                        number == 7 && rand1==row7[1] ||
                        number == 7 && rand1==row7[2] ||
                        number == 8 && rand1==row8[0] || 
                        number == 8 && rand1==row8[1] ||
                        number == 8 && rand1==row8[2] ||
                        number == 9 && rand1==row9[0] ||
                        number == 9 && rand1==row9[1] ||
                        number == 9 && rand1==row9[2] ||
                        number == 10 && rand1==row10[0] || 
                        number == 10 && rand1==row10[1] ||
                        number == 10 && rand1==row10[2] ||
                        number == 11 && rand1==row11[0] || 
                        number == 11 && rand1==row11[1] ||
                        number == 11 && rand1==row11[2] ||
                        number == 12 && rand1==row12[0] || 
                        number == 12 && rand1==row12[1] ||
                        number == 12 && rand1==row12[2] )
                    { 
                    
                    bet *= 6;
                    schips += bet;
                    win(bet,schips);    
                    }else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;       
                    }
                     break;
                     
                     
                case 6:// Red/Black
                    //prompt the user
                    cout<<"You Choose Red/Black. Now type '1' for Red"
                          " and '2' for black. "<<endl;
                    cin>>number;
                    zero(rand1);
                    
                if(number == 1)
                {    
                    if(rand1 == red[0] || rand1 == red[1] || rand1 == red[2]
                     ||rand1 == red[3] || rand1 == red[4] || rand1 == red[5]
                     ||rand1 == red[6] || rand1 == red[7] || rand1 == red[8]
                     ||rand1 == red[9] || rand1 == red[10] || rand1 == red[11]
                     ||rand1 == red[13] || rand1 == red[14] || rand1 == red[15]
                     ||rand1 == red[16] || rand1 == red[17])
                    {
                    bet += bet;
                    schips += bet;
                    win(bet,schips);     
                    } 
                    else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;     
                    }    
                }else if(number == 2)
                {
                    if(rand1 == blk[0] || rand1 == blk[1] || rand1 == blk[2]
                     ||rand1 == blk[3] || rand1 == blk[4] || rand1 == blk[5]
                     ||rand1 == blk[6] || rand1 == blk[7] || rand1 == blk[8]
                     ||rand1 == blk[9] || rand1 == blk[10] || rand1 == blk[11]
                     ||rand1 == blk[13] || rand1 == blk[14] || rand1 == blk[15]
                     ||rand1 == blk[16] || rand1 == blk[17])
                    {
                    bet += bet;
                    schips += bet;
                    win(bet,schips);        
                    }else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;      
                    }   
                     break;
                     
                case 7:// Even/Odd
                    //prompt the user
                    cout<<"You Choose Even or Odd.Enter '1' for odd, '2' for "
                          "even."<<endl;
                    cin>>number;
                    zero(rand1);
                    
                    if (rand1 == 37 || rand1==0)
                    {
                    cout<<"You lose! You now have "<<schips<<endl;
                    }else if(rand1%2 == number%2)
                    {
                    bet += bet;
                    schips += bet;
                    win(bet,schips);   
                    }else
                    {
                    cout<<"You lose! You now have "<<schips<<endl;       
                    }
                     break;  
                          
                default:
                    cout<<"ooops, looks like you entered an invalid response."
                        <<endl; 
            }
        }
        cout<<"If you want to play again, type 'yes'."<<endl;
        cin>>menu;    
    }while(menu == back);
    ofstream myfile;
    myfile.open("chips.txt");
    myfile<<schips;
    myfile.close();//puts the ending ending amount of chips in the file.
    return 0;
}
void win(int bet, int schips){
     cout<<"Well you win "<<bet<<" for a total chip count"
           " of "<<schips<<". Now scram!"<<endl;   
}
int zero(int &zero){
    if (zero==37)
    {
        zero=0;
        cout<<"The roulette spun a "<<zero<<zero<<endl;
    }else
    {
        cout<<"The roulette spun a "<<zero<<endl;
    }
    return zero;
    }


