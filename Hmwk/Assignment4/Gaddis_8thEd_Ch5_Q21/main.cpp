/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 22, 2015, 11:32 AM
 * Purpose: To Keep Track of the Tries
 */
//System Libraries
#include <cstdlib>//Srand functions
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    int bet,count;
    cout<<"Guess the random number!"<<endl;
    srand (time(0));//Random # generator
    int x = rand()%101;//Random # 1 to 100
    int y;//Your guess
    do//Loop to star the game
    {
    cout<<"Enter a number 1 to a 100: ";//Starting the game
    cin>>y;
       if(y > x){
            cout << "Guess to high. \n";//Tells you if you guess to high
            count++;
       }else if(y < x){
            cout << "Guess to low. \n";//Tells you if you guess to low
            count++;
       }else{//If you guess the correct number
            cout << "Congratulations! You got the correct number!"<<endl;
            count++;
       }
    }while (!(x == y));
    cout<<"Number of tries : "<<count;
    //Exit stage right!
    return 0;
}

