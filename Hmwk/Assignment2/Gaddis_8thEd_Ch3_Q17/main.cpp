/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 11:53 PM
 * Purpose: Calculate Math problem
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Function
    unsigned short rad1, rad2, tot;
    rad1=rand()%1001;
    rad2=rand()%1001;
    cout<<"There will be two random numbers you need to add together."<<endl;
    cout<<endl;
    cout<<rad1<<" + "<<rad2<<endl;
    cout<<endl;
    cout<<"When ready to see the answer type Y for yes."<<endl;
    char entr;
    cin>>entr;
    if(entr=='Y'||entr=='y')
    tot=rad1+rad2;
    cout<<endl;
    cout<<endl;
    cout<<"The total of the added number is "<<tot;
    
    return 0;
}

