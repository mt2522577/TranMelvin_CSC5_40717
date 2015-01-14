/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 9:13 PM
 * Purpose: Convert Celsius to Fahrenheit
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include<iostream>//Keyboard/Monitor I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Functions
    float faren, cel; //Temperature
    //Prompt User
    cout<<"Type in a Celsius temperature to convert it to Fahrenheit."<<endl;
    //Input from user
    cin>>cel;
    faren=1.8f*cel+32;//Conversion
    //Output
    cout<<faren<<" Fahrenheit"<<endl;
    
    return 0;
}

