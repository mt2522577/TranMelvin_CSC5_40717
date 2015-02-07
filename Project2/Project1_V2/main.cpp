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
//Didn't work when it was in the main
int card1,card2,card3,card4,cardtot,dcrd1,dcrd2,dcrd3,dcrd4;
char choice;
void clearScreen() // used to clear the screen after the game
{
    for(int i =0; i <50; i++)
    {
        cout << endl;
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    void dCards();//Didn't work when I put it above the main
    void delCrd3();
    void delCrd4();
    void dealrT();
        for(int a=1;a<=27;a++){//creating a border for the upper text
            cout<<"X*";}//Using 2 dimension arrays
            cout<<endl;
            cout<<endl;
            //Explain the game to the user
            cout<<"Welcome to the card game 21."<<endl
                <<"In order to win you'll have to beat the dealer's hand"<<endl
                <<"But if you get 21 you automatically win!"<<endl
                <<"Or when the dealer bust!!!"<<endl
                <<"Please press enter when ready!"<<endl;
            cout<<endl;
            cout<<endl;    
        //Lower border of the text
        for(int b=1;b<=27;b++){
            cout<<"X*";}
    cin.get();//Use so user can press enter
    clearScreen();
    for(int a=1;a<=14;a++){//creating a border for the upper text
        cout<<"21*";}//Using 2 dimension arrays
        cout<<endl;
        cout<<endl;
    cout<<"Lets play a game!"<<endl
        <<"You get two cards and if you want to hit"<<endl
        <<"please press the 'h' key"<<endl
        <<"if you rather stay and take a chance"<<endl
        <<"please press the 's' key."<<endl
        <<"Press enter when ready!"<<endl;
    cout<<endl;
    //Lower border of the text
    for(int b=1;b<=14;b++){
        cout<<"21*";}
    cin.get();
    cout<<endl;
    cout<<endl;
    dCards();
    cout<<"Card 1: "<<card1<<endl
        <<"Card 2: "<<card2<<endl;
    cardtot=card1+card2;
    cout<<"Your card total is "<<cardtot<<endl;
    cout<<"Do you want to hit or stay?"<<endl;
    cin>>choice;
    cout<<endl;
    if (choice=='h'||choice=='H'){
                delCrd3();
                 cout<<"Card 1 : "<<card1<<endl;
    cout<<"Card 2 : "<<card2<<endl;
    cout<<"Card 3 : "<<card3<<endl;
    cardtot=cardtot+card3;
    cout<<"Card total : "<<cardtot<<endl;
    }
    cout<<"Do you want to hit or stay?"<<endl;
    cin>>choice;
    cout<<endl;
    if(choice=='s'||choice=='S'){
        dealrT();
    }
    if (choice=='h'||choice=='H'){
                delCrd4();
    cout<<"Card 1 : "<<card1<<endl;
    cout<<"Card 2 : "<<card2<<endl;
    cout<<"Card 3 : "<<card3<<endl;
    cout<<"Card 4 : "<<card4<<endl;
    cardtot=cardtot+card4;
    cout<<"Card total : "<<cardtot<<endl;
    }
    if(choice=='s'||choice=='S'){
                dealrT();
    }
    
            if(cardtot>21){
                cout<<"You Bust!!! Try your luck next time!";
            }
            if(cardtot==21){
                cout<<"You Win!!!!"<<endl;
            }
    return 0;
}
void dCards(){
    srand(time(NULL));
    card1=rand()%11+1;
    card2=rand()%11+1;
    return;
                 }
void delCrd3(){
    srand(time(NULL));
    card3=rand()%11+1;
    return;
}
 void delCrd4(){
    srand(time(NULL));
    card4=rand()%11+1;
 }
void dealrT(){
    srand(time(NULL));
    dcrd1=rand()%11+1;
    dcrd2=rand()%11+1;
    dcrd3=rand()%11+1;
    dcrd4=rand()%11+1;
    return;
}