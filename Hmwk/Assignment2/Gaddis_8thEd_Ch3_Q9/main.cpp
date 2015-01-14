/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 7:37 PM
 * Purpose: Counting Calories
 */
//System Libraries
#include <cstdlib>
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cookies, cals;// cookies and calories=300 per 10 serving
    cout<<"How many whole cookies did you eat?"<<endl;
    //Prompt user
    cin>>cookies; //User input
    cals=cookies*30; //Equation for calories
    //output
    cout<<"You have consumed "<<cals<<" calories."<<endl;
    
    return 0;
}

