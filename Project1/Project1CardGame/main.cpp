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
    int choice;
    cout<<"Welcome to the card game 21."<<endl
        <<"In order to win you'll have to beat the dealer's hand"<<endl
        <<"But if you get 21 you automatically win!"<<endl
        <<"Or when the dealer bust!!!"
        <<"If you want to play please press 1"<<endl //Prompt user
        <<"If not press any key!"<<endl;
    //Declare variables
    cin>>choice; //User input
    do{
    cout<<"Wrong input!";
    }while(choice!=1);
  
    switch (choice){ //Open the game in a switch case
        case 1:{
            cout<<"Lets play a game!"<<endl
                <<"You get two cards and if you want to hit"<<endl
                <<"please press the 'h' key"<<endl
                <<"if you rather stay and take a chance"<<endl
                <<"please press the 's' key."<<endl;           
            char yes,check;
            cout<<endl;
            cout<<endl;
            cout<<endl;
             //Declare Variables
             do{ unsigned short player,player2,phit,ptot2;
                srand(static_cast<unsigned int>(time(0)));
                player=rand()%11+1;
                player2=rand()%11+1;
                phit=rand()%11+1;
                  do{  cout<<"Player Hand"<<endl;
                    cout<<player<<" "<<player2;
                    cout<<endl;
                    cout<<"Hit or Stay?"<<endl;
                    cin>>check;
                if(check=='h'||check=='H'){
                    ptot2=player+player2+phit;
                    cout<<endl;
                    cout<<"Player new hand"<<endl;
                    cout<<"Hit "<<phit<<endl;
                    cout<<"Total "<<ptot2<<endl;
                    cout<<"Do you want to hit again?"<<endl;
                    cout<<"Press the s key for no."<<endl;
                    cin>>check;}
                else if(check=='s'||check=='S'){
                    cout<<"You chose to keep the hand you have."<<endl;
                    ptot2=player+player2;
                    cout<<"Total "<<ptot2; 
                    cout<<endl;} 
                if(check=='h'||check=='H'){
                    cout<<"You chose to keep the hand you have."<<endl;
                    cout<<"Kept hand "<<ptot2; 
                    cout<<endl;}
                    while (ptot2>=21){
                        cout<<"You lost!!!"<<endl;
                        cout<<"You bust!!!"<<endl;
                        cout<<"Hand "<<ptot2;
                        cin>>check;
                    }
            }while(ptot2>=21);
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
        case 2:
                //do{ //Do while loop to play the game again
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
                    else if (comb<=16||comb>=7){
                            cout<<"Dealers New hand"<<endl;
                            cout<<"Hit 1: "<<hit<<endl;
                            cout<<"Hit 2: "<<hit2<<endl;
                            tot=hit+hit2+comb;
                            cout<<hit+hit2+comb<<endl;}
                    else if(comb<=21||comb>=16){
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
                    cout<<tot;
                    cout<<endl;
                    cout<<"You Won!!!!!!"<<endl;
                    cout<<"Please reset the game."<<endl;  
                } while(tot>=21){
                    cout<<"End of game"<<endl;}
                    cout<<"would you like to continue?"<<endl;
                            cin>>yes;
                } while(yes!='y'||yes!='Y');
                break;}   
             cout<<endl;
             cout<<endl;
             cout<<endl; 
            //Let the user know that he/she pressed the wrong key
            default:cout<<"You chose to exit the game and go play outside!!!"
                    <<endl;
        }     
    return 0;
}