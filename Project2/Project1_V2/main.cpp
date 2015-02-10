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
void clearScreen() //Used to clear the screen after the game
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
    do{
    dCards();
    cout<<"Card 1: "<<card1<<endl
        <<"Card 2: "<<card2<<endl;
    cardtot=card1+card2;
    cout<<"Your card total is "<<cardtot<<endl;
    cout<<"Do you want to hit or stay?"<<endl;
    cin>>choice;
    if(choice=='s'||choice=='S'){
        dealrT();
    }if (choice=='h'||choice=='H'){
                delCrd3();
                 cout<<"Card 1 : "<<card1<<endl;
    cout<<"Card 2 : "<<card2<<endl;
    cout<<"Card 3 : "<<card3<<endl;
    cardtot=cardtot+card3;
    cout<<"Card total : "<<cardtot<<endl;
    }
    cout<<"Do you want to hit or stay?"<<endl;
    cin>>choice;
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
                cout<<"You Bust!!! Try your luck next time!"<<endl;
            }
            if(cardtot==21){
                cout<<"You Win!!!!"<<endl;
            }
    dealrT();
    cout<<"Dealer Hands"<<endl;
    if(cardtot<=8&&cardtot>=2){
        cout<<"testing"<<endl;
        cout<<"Card 1: "<<dcrd1<<endl
            <<"Card 2: "<<dcrd2<<endl;
        cout<<"Card total : "<<dcrd1+dcrd2<<endl;
    }  
    else if(cardtot<=14&&cardtot>=9){
            cout<<"testing 2"<<endl;
            cout<<"Card 1: "<<dcrd1<<endl
                <<"Card 2: "<<dcrd2<<endl
                <<"Card 3: "<<dcrd3<<endl;
            cout<<"Card total : "<<dcrd1+dcrd2+dcrd3<<endl;
        }
    else if(cardtot<=20&&cardtot>=15){
                cout<<"testing 3"<<endl;
                cout<<"Card 1: "<<dcrd1<<endl
                <<"Card 2: "<<dcrd2<<endl
                <<"Card 3: "<<dcrd3<<endl
                <<"Card 4: "<<dcrd4<<endl;
                cout<<"Card total : "<<dcrd1+dcrd2+dcrd3+dcrd4
                   <<endl;
    }
    if(dcrd1+dcrd2>21&&dcrd1+dcrd2+dcrd3>21&&dcrd1+dcrd2+dcrd3+dcrd4>21){
                cout<<"Dealer Bust!!! You Win!"<<endl;
            }
            if(dcrd1+dcrd2==21&&dcrd1+dcrd2+dcrd3==21&&
                    dcrd1+dcrd2+dcrd3+dcrd4==21){
                cout<<"Dealer Win!!!!"<<endl;
            }
    if(cardtot==dcrd1+dcrd2&&cardtot==dcrd1+dcrd2+dcrd3
            &&cardtot==dcrd1+dcrd2+dcrd3+dcrd4){
        cout<<"It's a draw!!!"<<endl;
        cout<<"Do you want to run again?"<<endl;
        cin>>choice;
        clearScreen();
    }else if(cardtot<dcrd1+dcrd2&&cardtot<dcrd1+dcrd2+dcrd3
            &&cardtot<dcrd1+dcrd2+dcrd3+dcrd4){
        cout<<"You Lose!!! Better luck next time!"<<endl;
        clearScreen();
    }else if(cardtot>dcrd1+dcrd2&&cardtot>dcrd1+dcrd2+dcrd3
            &&cardtot>dcrd1+dcrd2+dcrd3+dcrd4){
        cout<<"You Beat the odds!!! congratulations you win!!!"<<endl;
        clearScreen();
    }
    else
        cout<<"Do you want to run again?"<<endl;
        cin>>choice;
        clearScreen();
    }while(choice=='y'||choice=='Y');           
        
    
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