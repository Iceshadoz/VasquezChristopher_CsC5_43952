/* 
 * File:   main.cpp
 * Author: Christopher Vasquez
 * Created on June 3, 2015, 7:52 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void lvlUp(int& lvl,int& exp);//Used to level up characters

int main(int argc, char** argv) {
    srand(time(0));
    string charNam[6];
    string Invtry[20];
    unsigned int choice;
    char choSure;
    cout<<"*****  *****   ***   ******  *******  *****   *** ** ***    ***   ***    **"<<endl;
    cout<<"*      *    * *   *  **        ***   *        **  **  **   *   *  ** **  ** "<<endl;
    cout<<"*      * ***  * * *  ****      ***   *****    **  **  **   *****  **  ** ** "<<endl;
    cout<<"*      *    * *   *  **        ***        *   **      **   *   *  **   **** "<<endl;
    cout<<"*****  *    * *   *  **        ***   *****    **      **   *   *  **     ** "<<endl;
    cout<<"Year 2257. With the recent breakthrough of Warp Technology, the human"
          " race as made it possible to explore and inhabit other planets across"
          " the universe. The only problem is, the amount of energy needed is "
          "too substantial. Earth only has enough spare resources to make one "
          "trip. The world government has created a plan to take a space voyage "
          "to the nearest planet with abundant resources.The planet Zalumia was"
          " discovered to have an ecosystem similar to Earth, and species appear"
          " in a primitive state. Zalumia however has a strong elemental  "
          " presence, but scientist believe that can benefit humanity. The year "
          " 2262 comes, and a massive space vessel was created. This ship has "
          " has a human capacity of 20,000. With 10,000 men being military, the "
          " remaining population is made up people from various professions. "
          " Cooks, doctors, builders, engineers, and many other joined this "
          " voyage. Being a master craftman, you manage to gather enough currency"
          " to reserve yourself a spot on the Goliath Ship.Determined, you look "
          " to the stars as the Goliath sets off into the deep space ocean."
          <<endl;
    cout<<"Before we begin, what is your name?"<<endl;
    cin>>charNam[0];
    cout<<"Now what is your gender?"<<endl;
    cin>>charNam[1];
    cout<<"If you could choose from a particular weapon mastery which would you"
          " choose?(Sword, Axe, Spear, Daggers, or Bow"<<endl;
    cin>>charNam[2];
    cout<<"Which element suites you the most?(Fire, Ice, Wind, Ground)"<<endl;
    cin>>charNam[3];
    cout<<"Thank your for your inputs, now the story begins"<<endl;
    Invtry[0]=charNam[2];
    cout<<" March 23, 2262......10 days of the voyage, 1 day before warp."<<endl;
    cout<<"You wake up, stretch your arms and body. Even though you are still "
          " tired, you get up and walk around. "<<endl;
    cout<<"What do you want to do? "<<endl;
    cout<<"Type 1 to walk around"<<endl;
    cout<<"Type 2 to go back to sleep(Warning, you will wake up after warp, and"
          " skip any remaining conversations"<<endl;
    cin>>choice;
    if(choice==2){
        cout<<"Are you sure you want to go to sleep?Type y for 'yes', n for 'no'"
            <<endl;
        cin>>choSure;
        if(choSure=='y'){
            choice=2;
        }else{
            choice=1;
        }

    }
    if(choice==1){ 
            cout<<"You explore the ship, talk to some residents, and you(the "
                  "player) learned how crafting is used in this time period. "
                  "Crafting structures require a new material called crafting"
                  " twine. This reduces building time and creating things "
                  "drastically"<<endl;
                  choice=2;  
        }
    if(choice==2){
        cout<<"You go to sleep, and wake up right after warp."<<endl;
        }   
    cout<<"March 27th, 14 days of the voyage, three days after warp."<<endl;
    cout<<"You wake up, and leave your quarters"<<endl;
    do{
    cout<<"Where would you like to go?"<<endl;
    cout<<"1. Science lab"<<endl;
    cout<<"2. Ship control cockpit"<<endl;
    cout<<"3. Escape Pods"<<endl;
    cout<<"4. Storage compartment"<<endl;
    cout<<"5. Passenger Quarters"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"You explore the science lab and mingle with some of the "
                  "scientist. They appear to excited that we are landing soon "
                  " and can't wait to study the lands the the strange elemental "
                  " phenomenon occurring all over the planet. They are starting "
                  " to talk about their theories, so it's best I leave before "
                  " I'm here all day"<<endl;
            break;
        }
        case 2:{
            cout<<"The doors appear to locked and I can't get inside "<<endl;
            cout<<"*Doors open and two guards walk out*"<<endl;
            cout<<"Guard1: Hey you! This isn't a place for you to be in. Go "
                  "back to your quarters and stay there. We will be landing in"
                  " two days"<<endl;
            cout<<"You decide it's a good idea and head back."<<endl;
            break;
        }
        case 3:{
            cout<<"These are the escape pods. There suppose to be able take "
                  " hold 10 people per pod. I guess comfort wasn't considered "
                  "when designing these compact things. Well no use for them "
                  "since we will be landing in a few days "<<endl;
            break;
        }
        case 4:{
            cout<<"You visit the storage compartment of the ship. After looking"
                  " around you, you found some spare twine!"<<endl;
            Invtry[1]="twine";
            break;
        }
        case 5:{
            cout<<"You walk around the passengar quarters and find nothing "
                  "interesting, so you decide to head back to your quarters"
                <<endl;
            cout<<"Do you want to go to sleep? y/n?"<<endl;
            cin>>choSure;
            if(choSure=='y'){
                choice=0;
            }else
                choice=5;
            break;
        }
    }
    }while(choice!=0);
    return 0;
}

void lvlUp(int& lvl, int& exp){
    
}