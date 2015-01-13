/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 11:35 AM
 * Purpose: Babylonian square root calculator
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
    //Declare variables
    float number, guess,r;
    //Input a number
    cout<<"Input a number to estimate its square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First Pass calculate ->"<<guess<<endl;
    //second pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second Pass calculate ->"<<guess<<endl;
    //Third pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the third pass
    cout<<"Third Pass calculate ->"<<guess<<endl;
    //Fourth pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"Fourth Pass calculate ->"<<guess<<endl;
    //Exit stage right
    return 0;
}

