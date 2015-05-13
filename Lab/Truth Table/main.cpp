/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 18, 2015, 9:35 
 * Purpose: Determine if the Table created in class
 *         agress with logic of the computer
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    bool x,y;
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"
        <<endl;
    //Output the first row of the table
    x=true;y=true;
    cout<<(x?'T':'F')<<"|"
        <<(y?'T':'F')<<"| "
        <<(!x?'T':'F')<<"| "
        <<(!y?'T':'F')<<"| "
        <<(x&&y?'T':'F')<<"|   "
        <<(x||y?'T':'F')<<"|   "
        <<(x^y?'T':'F')<<"|   "
        <<(x^y^y?'T':'F')<<"|    "
        <<(x^y^x?'T':'F')<<"|     "
        <<(!(x&&y)?'T':'F')<<"|     "
        <<(!x||!y?'T':'F')<<"|      "
        <<(!(x||y)?'T':'F')<<"|     "
        <<(!x&&!y?'T':'F')<<" "<<endl;
    x=true;y=false;
    cout<<(x?'T':'F')<<"|"
        <<(y?'T':'F')<<"| "
        <<(!x?'T':'F')<<"| "
        <<(!y?'T':'F')<<"| "
        <<(x&&y?'T':'F')<<"|   "
        <<(x||y?'T':'F')<<"|   "
        <<(x^y?'T':'F')<<"|   "
        <<(x^y^y?'T':'F')<<"|    "
        <<(x^y^x?'T':'F')<<"|     "
        <<(!(x&&y)?'T':'F')<<"|     "
        <<(!x||!y?'T':'F')<<"|      "
        <<(!(x||y)?'T':'F')<<"|     "
        <<(!x&&!y?'T':'F')<<" "<<endl;
    x=false;y=true;
    cout<<(x?'T':'F')<<"|"
        <<(y?'T':'F')<<"| "
        <<(!x?'T':'F')<<"| "
        <<(!y?'T':'F')<<"| "
        <<(x&&y?'T':'F')<<"|   "
        <<(x||y?'T':'F')<<"|   "
        <<(x^y?'T':'F')<<"|   "
        <<(x^y^y?'T':'F')<<"|    "
        <<(x^y^x?'T':'F')<<"|     "
        <<(!(x&&y)?'T':'F')<<"|     "
        <<(!x||!y?'T':'F')<<"|      "
        <<(!(x||y)?'T':'F')<<"|     "
        <<(!x&&!y?'T':'F')<<" "<<endl;
    x=false;y=false;
    cout<<(x?'T':'F')<<"|"
        <<(y?'T':'F')<<"| "
        <<(!x?'T':'F')<<"| "
        <<(!y?'T':'F')<<"| "
        <<(x&&y?'T':'F')<<"|   "
        <<(x||y?'T':'F')<<"|   "
        <<(x^y?'T':'F')<<"|   "
        <<(x^y^y?'T':'F')<<"|    "
        <<(x^y^x?'T':'F')<<"|     "
        <<(!(x&&y)?'T':'F')<<"|     "
        <<(!x||!y?'T':'F')<<"|      "
        <<(!(x||y)?'T':'F')<<"|     "
        <<(!x&&!y?'T':'F')<<" "<<endl;
        
               
    
    return 0;
}

