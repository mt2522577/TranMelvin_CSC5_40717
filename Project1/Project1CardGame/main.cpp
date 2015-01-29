/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 28, 2015, 8:21 PM
 * Purpose: Use our skills we learned
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Function

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Explain the game to the user
    cout<<"Welcome to the card game 21."<<endl
        <<"In order to win you'll have to beat the dealer hand "
        <<"but if you get 21 you automatically win!"<<endl
        <<"If you want to play please press 1"<<endl //Prompt user
        <<"If not press any key!"<<endl;
    //Declare variables
    int choice;
    cin>>choice; //User input
    switch (choice){ //Open the game in a switch case
        case 1:{cout<<"Lets play a game!"<<endl;
        break;}//End the program
        //Let the user know that he/she pressed the worng key
        default:cout<<"Please enter the correct key!!!"<<endl;
    }
    
        
    return 0;
}