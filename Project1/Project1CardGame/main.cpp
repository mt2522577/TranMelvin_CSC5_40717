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
        <<"In order to win you'll have to beat the dealer's hand"<<endl
        <<"but if you get 21 you automatically win!"<<endl
        <<"Or when the dealer bust!!!"
        <<"If you want to play please press 1"<<endl //Prompt user
        <<"If not press any key!"<<endl;
    //Declare variables
    int choice;
    cin>>choice; //User input
    switch (choice){ //Open the game in a switch case
        case 1:{
            cout<<"Lets play a game!"<<endl
                <<"You get two cards and if you want to hit"<<endl
                <<"please press the 'h' key"<<endl
                <<"if you rather stay and take a chance"<<endl
                <<"please press the 's' key."<<endl;           
            char yes;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            do{ //Do while loop to play the game again
                char check;// Used to hit or stay in the game
                //Random number generator
                srand(static_cast<unsigned int>(time(0)));
                //Declare Variables
                unsigned short dealer,dealer2,comb,hit
                ,hit2,hit3,tot;
                //Equation for the dealer hand/player
                dealer=rand()%11+1;
                dealer2=rand()%11+1;
                comb=dealer+dealer2;
                hit=rand()%6+1;
                hit2=rand()%6+1;
                hit3=rand()%6+1;
                //Output the results
                cout<<"Dealer Hand"<<endl;
                if(comb<=16){ //Using Nested statement
                    cout<<dealer<<" "<<dealer2<<endl;
                    if (comb<=7){
                        cout<<"Dealers New hand"<<endl;
                        cout<<"Hit 1: "<<hit<<endl;
                        cout<<"Hit 2: "<<hit2<<endl;
                        cout<<"Hit 3: "<<hit3<<endl;
                        tot=hit+hit2+hit3+comb;
                        cout<<hit+comb<<endl;}   
                      if (comb<=16||comb>=7){
                            cout<<"Dealers New hand"<<endl;
                            cout<<"Hit 1: "<<hit<<endl;
                            cout<<"Hit 2: "<<hit2<<endl;
                            tot=hit+hit2+comb;
                            cout<<hit+hit2+comb<<endl;}
                          if(comb<=21||comb>=16){
                                cout<<"Dealers New hand"<<endl;
                                cout<<"Hit 1: "<<hit<<endl;
                                tot=hit+comb;
                                cout<<hit+comb<<endl;}
                              if(comb==21){
                                  cout<<"Dealer won!!!!"<<endl;
                                  cout<<"You just lost!!!"<<endl;
                              }   
                }
                //Used a while loop to see if the dealer bust
                //and while dealer bust the user won the game automatically
                //and the game ends there.
                else{ 
                    cout<<"Dealer bust!!!!"<<endl;
                    cout<<"You Won!!!!!!"<<endl;
                    cout<<"Please reset the game."<<endl;  
                }          
             cout<<endl;
             cout<<endl;
             cout<<endl;
             //Declare Variables
             unsigned short player,player2,phit
                            ,phit2,phit3,ptot,ptot2;
                player=rand()%11+1;
                player2=rand()%11+1;
                phit=rand()%6+1;
                cout<<"Player Hand"<<endl;
                cout<<player<<" "<<player2;
                cout<<endl;
                cout<<"Hit or Stay?"<<endl;
                cin>>check;
                if(check=='h'||check=='H'){
                cout<<"Player new hand"<<endl;
                ptot2=player+player2+phit;
                cout<<ptot2<<endl;}
                else
                    cout<<"You chose to keep the hand you have."<<endl;
                           ptot2=player+player2;
                           cout<<ptot2; 
                           cout<<endl;
                cout<<"Would you like to play again?"<<endl;
                cin>>yes;
            }while(yes=='y'||yes=='Y');
            break;}//End the program

            //Let the user know that he/she pressed the wrong key
            default:cout<<"You chose to exit the game and go play outside!!!"
                    <<endl;
        }
    
        
    return 0;
}