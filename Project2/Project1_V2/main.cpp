/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on February 5, 2015, 9:12 PM
 * Purpose: A better game of 21 and improvement of the first project
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream> //File i/o
#include <ctime> //Time Functions
#include <cmath> //Math Functions
#include <iomanip> //Format Libraries
using namespace std;

//User Libraries

//Global Function

//Function Prototype
//Declared variables
int card1,card2,card3,card4,cardtot,dcrd1,dcrd2,dcrd3,dcrd4,dlrtot;
//used char for character input
char choice;
//used int because of integer input
int select;
void clearScreen() //Used to clear the screen after the game
{
    for(int i=0;i<23;i++)
    {
        cout << endl;
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    void dCards();
    void delCrd3();
    void delCrd4();
    void dealrT();
        //creating a border for the upper text
        for(int a=1;a<=27;a++){
            cout<<"X*";}//Using 2 dimension arrays
            cout<<endl;
            cout<<endl;
            //Explain the game to the user
            cout<<"Welcome to the card game 21."<<endl
                <<"In order to win you'll have to beat the dealer's hand"<<endl
                <<"But if you get 21 you automatically win!"<<endl
                <<"Or when the dealer bust!!!"<<endl
                <<"Please press enter when ready!"<<endl;
            //used as spacers
            cout<<endl;
            cout<<endl;    
        //Lower border of the text
        for(int b=1;b<=27;b++){
            //output pattern
            cout<<"X*";}
            cout<<endl;
    //Use so user can press enter
    cin.get();
    //clear screen
    clearScreen();
    //creating a border for the upper text
    for(int a=1;a<=14;a++){
        //Using 2 dimension arrays
        cout<<"21*";}
        cout<<endl;
        cout<<endl;
        //Display output
    cout<<"Lets play a game!"<<endl
        <<"You get two cards and if you want to hit"<<endl
        <<"please press the 'h' key"<<endl
        <<"if you rather stay and take a chance"<<endl
        <<"please press the 's' key."<<endl
        <<"Press 1 when ready!"<<endl;
    //When player press 1 it'll run the game
    //If not it will exit the game
    cout<<endl;
    //Lower border of the text
    for(int b=1;b<=14;b++){
        cout<<"21*";}
    cout<<endl;
    //User input
    cin>>select;
    cout<<endl;
    cout<<endl;
    //open the game in a switch
    switch(select){
    //only one case for the game
    case 1:{
            //use to run a loop
            do{
            ofstream output;
            //Open file
            output.open("Dealt_Hands.dat");
            dCards();//using the functions declared
            cout<<"Card 1:"<<setw(2)<<card1<<endl//first card
                <<"Card 2:"<<setw(2)<<card2<<endl;//second card
            cardtot=card1+card2;//Player total of the first two cards
            //Ask user if they want to hit or stay
            cout<<"Your card total is "<<cardtot<<endl;
            //output player cards to a text file
            output<<"Player cards: "<<card1<<" "<<card2<<endl;
            cout<<"Do you want to hit or stay?"<<endl;
            cin>>choice;
            //See if user wants to hit or stay
                if(choice=='s'||choice=='S'){
                    dealrT();//start dealer turn
                    //If h is chosen then the third card is dealt
                    }if (choice=='h'||choice=='H'){
                         delCrd3();
                         cout<<"Card 1:"<<setw(2)<<card1<<endl;
                         cout<<"Card 2:"<<setw(2)<<card2<<endl;
                         cout<<"Card 3:"<<setw(2)<<card3<<endl;
                         //player total
                         cardtot=cardtot+card3;
                         //output card total
                         cout<<"Card total:"<<setw(2)<<cardtot<<endl;
                         //output player cards to a text file
                         output<<"Player card total: "<<card1<<" "<<card2<<" "
                                 <<card3<<endl;
                    }
            //repeat the process if they want to hit or stay
            cout<<"Do you want to hit or stay?"<<endl;
            cin>>choice;
            //if player choose H the fourth card is dealt
            if (choice=='h'||choice=='H'){
                //calling the fourth card from the void
                delCrd4();
                //output the cards the user has
                cout<<"Card 1:"<<setw(2)<<card1<<endl;
                cout<<"Card 2:"<<setw(2)<<card2<<endl;
                cout<<"Card 3:"<<setw(2)<<card3<<endl;
                cout<<"Card 4:"<<setw(2)<<card4<<endl;
                cardtot=cardtot+card4;
                //output card total
                cout<<"Card total :"<<setw(2)<<cardtot<<endl;
                //output player cards to a text file
                output<<"Player card : "<<card1<<" "<<card2<<" "
                                 <<card3<<" "<<card4<<endl;
            }
            //if the player choose S then it starts the dealer turn
                if(choice=='s'||choice=='S'){
                            //start dealer turn
                            dealrT();
                }
                    //if the player total is greater than 21
                    if(cardtot>21){
                    cout<<"You Bust!!! Try your luck next time!"<<endl;
                    }
                        //if the card total is equal to 21
                        if(cardtot==21){
                    cout<<"You Win!!!!"<<endl;
                        }
    //start dealer turn
    dealrT();
    cout<<"Dealer Hands"<<endl;
            //going to run regardless
            if(cardtot<=8&&cardtot>=2){
                //Dealers first hand
                cout<<"Card 1:"<<setw(2)<<dcrd1<<endl
                    <<"Card 2:"<<setw(2)<<dcrd2<<endl;
                //first equation for dealer total
                dlrtot=dcrd1+dcrd2;
                //output dealer card total
                cout<<"Card total : "<<dlrtot<<endl;
                //output dealer cards to a text file
                output<<"Dealer card: "<<dcrd1<<" "<<dcrd2<<endl;
            }  
                //if player total is between the rang it will run this
                else if(cardtot<=16&&cardtot>=9){
                        //outputting three cards
                        cout<<"Card 1:"<<setw(2)<<dcrd1<<endl
                            <<"Card 2:"<<setw(2)<<dcrd2<<endl
                            <<"Card 3:"<<setw(2)<<dcrd3<<endl;
                        //Equation for dealer total
                        dlrtot=dcrd1+dcrd2+dcrd3;
                        //output dealer card total
                        cout<<"Card total : "<<dlrtot<<endl;
                        //output dealer cards to a text file
                        output<<"Dealer card : "<<dcrd1<<" "<<dcrd2<<" "
                                <<dcrd3<<endl;
                }       //if player total is between the rang it
                        //will run this
                        else if(cardtot<=20&&cardtot>=16){
                                //will output four cards
                                cout<<"Card 1:"<<setw(2)<<dcrd1<<endl
                                    <<"Card 2:"<<setw(2)<<dcrd2<<endl
                                    <<"Card 3:"<<setw(2)<<dcrd3<<endl
                                    <<"Card 4:"<<setw(2)<<dcrd4<<endl;
                                //equation for dealer total
                                    dlrtot=dcrd1+dcrd2+dcrd3+dcrd4;
                                //will output dealer total
                                cout<<"Card total:"<<setw(2)<<dlrtot<<endl;
                                //output dealer cards to a text file
                                output<<"Dealer card : "<<dcrd1<<" "
                                      <<dcrd2<<" "<<dcrd3<<" "<<dcrd4<<endl;
            }
        if(cardtot==dlrtot){
        //if player and dealer hand is the same 
        cout<<"It's a draw!!!"<<endl;
        cout<<"Do you want to run again?"<<endl;
        cin>>choice;
        clearScreen();}
        if(cardtot>21){//if player total is greater than 21
           cout<<"You Bust!!! Try your luck next time!"<<endl;
           //if the card total is greater than 21
           cout<<"You Lose!!! Better luck next time!"<<endl;
           cout<<"Do you want to run again?"<<endl;
           cin>>choice;
           clearScreen();
            }
                    else if(dlrtot>cardtot&&dlrtot<21){
                        cout<<"Dealer Wins!"<<endl;
                        cout<<"Do you want to run again?"<<endl;
                        cin>>choice;
                        clearScreen();
                    }
                    else if(cardtot>dlrtot){
                        cout<<"You win!!!"<<endl;
                        cout<<"Do you want to run again?"<<endl;
                        cin>>choice;
                        clearScreen();
                    }
                    //if the player gets 21 he automatically win
                    else if(cardtot==21){
                                 cout<<"You Win!!!!"<<endl;
                                 cout<<"Do you want to run again?"<<endl;
                                 cin>>choice;
                                 clearScreen();
                             }
    if(dlrtot>21){//if dealer hand is over 21 player wins
                cout<<"Dealer Bust!!! Congratulations you win!!!"<<endl;
                //if dealer total is greater than 21
                cout<<"You Beat the odds!!!"<<endl;
                cout<<"Do you want to run again?"<<endl;
                cin>>choice;
                clearScreen();
            }
    else if(dlrtot==21){//if dealer hand is equal to 21
                cout<<"Dealer Win!!!!"<<endl;
                cout<<"Do you want to run again?"<<endl;
                cin>>choice;
                clearScreen();//used to clear screen
            }
    //Close the file
    output.close();
    //Ask user if they want to continue with the game again
    //if not the game will end
    }while(choice=='y'||choice=='Y'); 
    //used to end the case 
    break;}
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //default used if player inputs wrong button
    default: cout<<"You presses the wrong button!!! please try again!"<<endl;
    }
    return 0;
}
void dCards(){//Deal player first two cards
    srand(time(NULL));//random number generator
    card1=rand()%11+1;
    card2=rand()%11+1;
    return;
                 }
void delCrd3(){//Deal player third card
    srand(time(NULL));//random number generator
    card3=rand()%11+1;
    return;
}
 void delCrd4(){//Deal player fourth card
    srand(time(NULL));//random number generator
    card4=rand()%11+1;
 }
void dealrT(){//dealer cards
    srand(time(NULL));//random number generator
    dcrd1=rand()%11+1;
    dcrd2=rand()%11+1;
    dcrd3=rand()%11+1;
    dcrd4=rand()%11+1;
    return;
}