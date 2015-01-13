/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 10:15 AM
 * Purpose: bitcoin conversion
 */
//System Libraries
#include <cstdlib>
#include<iostream>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and initialize
    float bcToDlr=232.8; //Jan 13th,2015 10:17am
    float erToDlr=0.849381; //Same Date
    float ynToDlr=118.03; //Same Date
    float bitcoin,dollars,euros,yen;
    //Input the number of bitcoin then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<" (dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<" (dollars)"<<endl;
    cout<<bitcoin<<" = "<<yen<<" (dollars)"<<endl;
    //Exit stage right!
    return 0;
}

