/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on June 6, 2015, 11:38 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>


using namespace std;
//user libraries

//global constants

//function prototypes
int reRoll(int dice[]);//Re roll Loop
int dspDice(int dice[]);//Display dice rolls
int aces(int dice[], int &score);//Checks all "Aces" and calculates the score
int twos(int dice[], int &score);//Checks all "Twos" and calculates the score
int threes(int dice[], int &score);//Checks all "Threes" and calculates the score
int fours(int dice[], int &score);//Checks all "Fours" and calculates the score
int fives(int dice[], int &score);//Checks all "Fives" and calculates the score
int sixes(int dice[], int &score);//Checks all "Sixes" and calculates the score
int theKind(int dice[], int &score);//Checks Three of a kind calculates the score
int forKind(int dice[], int &score);//Checks Four of a kind and calculates the score
int fullHse(int dice[], int &score);//Checks The full house and calculates the score
int smlStrt(int dice[], int &score);//Checks Small straight and calculates the score
int lrgStrt(int dice[], int &score);//Checks Large Straight and calculates the score
int Yahtzee(int dice[], int &score);//Checks Yahtzee and calculates the score
int chance(int dice[], int &score);//Checks Chance and calculates the score
int swap(int dice[]);//Swap for sequential
int rndRedo(int score, int &round);//Checks current selection
int scrChng(int &score);//Changes score to zero when you failed a condition.
char inptVal(char answer);//Yes no validation
int numVal(int number);//Number validation

//Execution Begins Here!
int main(int argc, char** argv) {
    int players;//Number of players
    char check;//The 'y' and 'n' check
    srand(time(0));//The randomize seed for dice rolls
    int round=0;//The round counter
    string temp;//The string used for character names
    int dice[5];//The dice array
    int menu;//Switch Selection
    int score=0;//The temporary placeholder of player score
    int stop;//Stops or continues the do while loop
    

    cout<<"Welcome to the Yahtzee Game! When prompted a 'yes' or 'no'"
          " question, please type and enter 'y'(for yes), and 'n' (for no)"
          <<endl;
    cout<<"Please enter the number of players."<<endl;
    cin>>players;
    
    string name[players];
    int ace[players],two[players],three[players],four[players],
    five[players],six[players],theKnd[players],forKnd[players],
    fulHse[players], smStrt[players], lgStrt[players], Yatzee[players],
    chnce[players];//later to check if a player has a score already for that requirement
    
    for(int i=0;i<players;i++){//Naming loop. loop level 1
        cout<<"Please enter your name for player"<<i+1<<endl;
        cin>>temp;
        name[i]=temp;
    }
    cout<<"Lets get that game setup for you"<<endl;

    do{//The repeat of the game till 13 rounds are complete.
    for(int i=0;i<players;i++){//First lvl for loop uses 'i'. Player's turn
        cout<<name[i]<<" it's your turn!"<<endl;
        cout<<"Your dice rolls are : "<<endl;
        for(int j=0;j<5;j++){//Roll out the five dices
            dice[j]= rand() % 6 + 1;
            cout<<"Dice roll "<<j+1<<" is "<<dice[j]<<endl;
        }
        cout<<"Do you want to re roll any dice rolls? type 'y' for yes, and "
              "'n' for no"<<endl;
        cin>>check;
        inptVal(check);
        if(check=='y'){
            reRoll(dice);//Dice re-roll function
            dspDice(dice);
            cout<<"Did you want to re-roll any dice?"<<endl;
            cin>>check;
            inptVal(check);
            if(check=='y'){
                reRoll(dice);//Dice re-roll function
                dspDice(dice);
               
            }else if(check=='n'){
                dspDice(dice);
            }   
        else if(check=='n'){
        dspDice(dice);    
        }
        }else if(check=='n'){
                dspDice(dice);
        }
    
        do{//Selection menu loop
        cout<<"Now, after getting the final numbers of your turn, please enter "
              " which section to count it under:"<<endl;
        cout<<"Type 1 for 'Aces'"<<endl;
        cout<<"Type 2 for 'Twos'"<<endl;
        cout<<"Type 3 for 'Threes'"<<endl;
        cout<<"Type 4 for 'Fours'"<<endl;
        cout<<"Type 5 for 'Fives'"<<endl;
        cout<<"Type 6 for 'Sixes'"<<endl;
        cout<<"Type 7 for 'Three of a kind'"<<endl;
        cout<<"Type 8 for 'Four of a kind'"<<endl;
        cout<<"Type 9 for 'Full House'"<<endl;
        cout<<"Type 10 for 'Small Straight'"<<endl;
        cout<<"Type 11 for 'Large Straight'"<<endl;
        cout<<"Type 12 for 'Yahtzee'"<<endl;
        cout<<"Type 13 for 'Chance'"<<endl;
        cout<<"Type 14 for 'Joker Yahtzee'(any additional yahtzee YOU rolled)"
            <<endl;
        cin>>menu;
        numVal(menu);
        switch(menu){
            case 1://Aces
                rndRedo(score,stop);
                aces(dice,score);
                ace[i]=score;
                score=0;//to make sure the first function doesn't kick you out.
                break;
            case 2://Twos
                rndRedo(score,stop);
                twos(dice,score);
                two[i]=score;
                score=0;
                break;
            case 3://Threes
                rndRedo(score,stop);
                threes(dice,score);
                three[i]=score;
                score=0;
                break;    
            case 4://Fours
                rndRedo(score,stop);
                fours(dice,score);
                four[i]=score;
                score=0;
                break;
           case 5://Fives
               rndRedo(score,stop);
               fives(dice,score);
               five[i]=score;
               score=0;
                break;
            case 6://Sixes
                rndRedo(score,stop);
                sixes(dice,score);
                six[i]=score;
                score=0;
                break;    
            case 7://ThreeKind
                rndRedo(score,stop);
                swap(dice);
                theKind(dice,score);
                scrChng(score);
                theKnd[i]=score;
                score=0;
                break;
            case 8://FourKind
                rndRedo(score,stop);
                swap(dice);
                forKind(dice,score);
                scrChng(score);
                forKnd[i]=score;
                score=0;
                break;
            case 9://Full House
                rndRedo(score,stop);
                swap(dice);
                fullHse(dice,score);
                scrChng(score);
                fulHse[i]=score;
                score=0;
                break;
            case 10://Small Straight
                rndRedo(score,stop);
                swap(dice);
                smlStrt(dice,score);
                scrChng(score);
                smStrt[i]=score;
                score=0;
                break;
            case 11://Large Straight
                rndRedo(score,stop);
                swap(dice);
                lrgStrt(dice,score);
                scrChng(score);
                lgStrt[i]=score;
                score=0;
                break;
            case 12://Yahtzee
                rndRedo(score,stop);
                swap(dice);
                Yahtzee(dice,score);
                Yatzee[i]=score;  
                score=0;
                break;
            case 13://Chance
                rndRedo(score,stop);
                chance(dice,score);
                chnce[i]=score;
                score=0;
                break;
            case 14:
                cout<<"A Joker Yahtzee is any Yahtzee you roll after you have "
                      "roll2ed atleast one other Yahtzee. You will be returned "
                      "selection menu, so you can choose which selection you "
                      "want to omit from your score card"<<endl;
                stop=15;
                score=0;
                break;
        }
                
        }while(stop==15);
    }
    round++;    
    }while(round!=6);
    cout<<"Now that the game is done, lets do some calculations"<<endl;
    int upprTot[players];//Total for upper section for players
    int lowrTot[players];//Total for lower section for players
    int finlTot[players];//Total for all sections for players
    
    for(int i=0;i<players;i++){
        upprTot[i]=ace[i]+two[i]+three[i]+four[i]+five[i]+six[i];
        if(upprTot[i]>63){
            upprTot[i]+=35;
        }
        lowrTot[i]=theKnd[i]+forKnd[i]+fulHse[i]+smStrt[i]+lgStrt[i]+Yatzee[i]+
                chnce[i];
        finlTot[i]=upprTot[i]+lowrTot[i];
        cout<<"The upper section final score for "<<name[i]<<" is"<<upprTot[i]
            <<endl;
        cout<<"The lower section final score for "<<name[i]<<" is"<<lowrTot[i]
            <<endl;
        cout<<"The final score for "<<name[i]<<" is"<<finlTot[i]<<endl<<endl;
    }
    
    int win;
    string winStr;
    for(int i=0;i<players;i++){
        for(int j=0;j<players;j++){
            if (finlTot[i]>finlTot[j]){
                win=finlTot[i];
                winStr=name[i];
            }
        }
    }
    cout<<"The Winner of the Yahtzee game is player "<<winStr<<" with a score "
          "of: "<<win;
    
    
    return 0;
}
int reRoll(int dice[]){
    char answer;
    for(int k=0;k<5;k++){//Reroll Any Dice
            cout<<"Did you want to re-roll Dice "<<k+1<<"?"<<endl;
            cin>>answer;
            inptVal(answer);
            if(answer=='n'){//Individually asks for each dice
            cout<<"Dice roll"<<k+1<<" is "<<dice[k]<<endl;
            }else if(answer=='y'){
            dice[k]= rand() % 6 + 1;
            cout<<"Dice roll"<<k+1<<" is "<<dice[k]<<endl;
            }
        }
}
int dspDice(int dice[]){//display dice
    cout<<"Your dice are as follows"<<endl;
    for(int k=0;k<5;k++){
        cout<<"Dice roll "<<k+1<<" is "<<dice[k]<<endl;
    } 
    
}
int aces(int dice[], int &score){//aces validation
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
        for(int i=0;i<5;i++){
         if(dice[i]!=1){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;
}
int twos(int dice[], int &score){//twos validation
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
         for(int i=0;i<5;i++){
         if(dice[i]!=2){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;    
}
int threes(int dice[], int &score){//three requirements
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
        for(int i=0;i<5;i++){
         if(dice[i]!=3){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;    
}
int fours(int dice[], int &score){//four requirement
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
        for(int i=0;i<5;i++){
         if(dice[i]!=4){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;   
}
int fives(int dice[], int &score){//Five requirement
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
        for(int i=0;i<5;i++){
         if(dice[i]!=5){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;    
}
int sixes(int dice[], int &score){//sixes requirements
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
        for(int i=0;i<5;i++){
         if(dice[i]!=6){
            dice[i]==0;
         }else{
            score+=dice[i];
         }
        }
    return score;    
}
int theKind(int dice[], int &score){//Three of kind requirement
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
    score=100;
    }
    for(int i=0;i<5;i++){
        score+=dice[i];
    }
    if(dice[0]==dice[1]&&dice[0]==dice[2]){
        score=score;
    }else if(dice[1]==dice[2]&&dice[1]==dice[3]){
        score=score;
    }else if(dice[2]==dice[3]&&dice[2]==dice[4]){
        score=score;
    }else{
        score=1;
    }
    return score;
}
int forKind(int dice[], int &score){//Four of kind requirement
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=100;
    }
    for(int i=0;i<5;i++){
        score+=dice[i];
    }
    if(dice[0]==dice[1]&&dice[0]==dice[2]&&dice[0]==dice[3]){
        score=score;
    }else if(dice[1]==dice[2]&&dice[1]==dice[3]&&dice[1]==dice[4]){
        score=score;
    }else{
        score=1;
    }
    return score;
}
int fullHse(int dice[], int &score){//Check Full house requirement
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=125;
    }
    if(dice[0]==dice[1]&&dice[0]==dice[2]){
        if(dice[3]==dice[4]){
            score=25;
        }
    }else if(dice[0]==dice[1]){
        if(dice[2]==dice[3]&&dice[2]==dice[4]){
            score=25;
        }
    }else{
        score=1;
    }
    return score;
}
int smlStrt(int dice[], int &score){//Checks 3 possible solutions with 4 numbers
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=130;
    }
    if(dice[0]==1){
        for(int i=0;i<4;i++){
            if(dice[i]!=(i+1)){
                score=1;
            }
        }
    }else if(dice[0]==2){
        for(int i=0;i<4;i++){
            if(dice[i]!=(i+2)){
                score=1;
            }
        }
    }else if(dice[0]==3){
        for(int i=0;i<4;i++){
            if(dice[i]!=(i+3)){
                score=1;
            }
        }
    }else{
        score=30;
    }
    return score;
}
int lrgStrt(int dice[], int &score){//Checks 2 possible solutions with 5 numbers
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=140;
    }
    if(dice[0]==1){
        for(int i=0;i<5;i++){
            if(dice[i]!=(i+1)){
                score=1;
            }
        }
    }else if(dice[0]==2){
        for(int i=0;i<5;i++){
            if(dice[i]!=(i+2)){
                score=1;
            }
        }
    }else{
        score=40;
    }
    return score;
}
int Yahtzee(int dice[], int &score){//Yahtzee, compare all 5 numbers
    if(dice[0]==dice[1]==dice[2]==dice[3]==dice[4]){
        score=50;
    }else{
        score=1;
    }
    return score;
}
int chance(int dice[], int &score){//All you do is add them up
    for(int i=0;i<5;i++){
        score+=dice[i];
    }
    return score;
}
int swap(int dice[]){//Swap for sequential function
    int temp=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(dice[i]<dice[j]){
                temp=dice[i];
                dice[i]=dice[j];
                dice[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<dice[i]<<endl;
    }
}
int scrChng(int &score){//Changes the score so that there is no errors
    if(score==1){
        score=0;
    }
    return score;
}
int rndRedo(int score, int &round){//Check the section and see if you have done it
    if(score>0){
        round=15;
        cout<<"oops, you already have done this selection"<<endl;
    }
    return round;
}
char inptVal(char answer){//Character validation.
    while((answer!='n')&&(answer!='y')){
        cout<<"invalid response, please enter again."<<endl;
        cin>>answer;
    }
    return answer;
}
int numVal(int number){//Number validation
    while((number<1)||(number>14)){
        cout<<"invalid response, please enter again."<<endl;
        cin>>number;
    }
    return number;
}
