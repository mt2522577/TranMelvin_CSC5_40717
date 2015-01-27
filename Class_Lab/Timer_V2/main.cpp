/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 26, 2015, 10:05 AM
 */
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 Variables
    int x, y, begTim, endTim, ans, totTim;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTim= 10;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"Wait for the next prompt!!!"<<endl;
    do {
        endTim=static_cast<unsigned int>(time(0));
    }while(endTim-begTim<5);
    cout<<"Your answer is?"<<endl;
    cin>>ans;
     endTim=(static_cast<unsigned int>(time(0)));
    //Determine if correct
     if(totTim>endTim-begTim){
         if(ans==(x+y))cout<<"You are Correct"<<endl;
         else cout<<"You are wrong"<<endl;
     }else {
         cout<<"You took too much time!!!"<<endl;
         cout<<"Time allowed = "<<totTim<<endl;
         cout<<"Your time = "<<endTim-begTim<<endl;
     }
    //Exit Stage Right!
    return 0;
}


