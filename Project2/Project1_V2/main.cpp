/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on February 5, 2015, 9:12 PM
 * //A better game of 21
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

//User Libraries

//Global Function

//Function Prototype
int card1,card2,card3,card4;//Didnt work when it was in the main
void clearScreen() // used to clear the screen after the game
{
    for(int i =0; i <50; i++)
    {
        cout << endl;
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    void dealCards();//Didn't work when I put it above the main
    //Explain the game to the user
    cout<<"Welcome to the card game 21."<<endl
        <<"In order to win you'll have to beat the dealer's hand"<<endl
        <<"But if you get 21 you automatically win!"<<endl
        <<"Or when the dealer bust!!!"<<endl
        <<"Please press enter when ready!"<<endl;
    cin.get();//Use so user can press enter
    clearScreen();
    cout<<"Lets play a game!"<<endl
        <<"You get two cards and if you want to hit"<<endl
        <<"please press the 'h' key"<<endl
        <<"if you rather stay and take a chance"<<endl
        <<"please press the 's' key."<<endl
        <<"Press enter when ready!"<<endl;
    cin.get();
    dealCards();
    cout<<"Card 1: "<<card1<<endl
        <<"Card 2: "<<card2<<endl;
    
        //Declare Variables
        //const int SIZE=52;//Constant for the array size
       // int deck[SIZE];//An array for 52 cards
          
    return 0;
}
void dealCards(){
    srand(time(NULL));
    card1=rand()%11+1;
    card2=rand()%11+1;
    return;
                 }