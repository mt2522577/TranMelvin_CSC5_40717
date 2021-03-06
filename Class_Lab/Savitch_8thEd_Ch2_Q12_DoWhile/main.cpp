/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 11:35 AM
 * Purpose: Babylonian square root calculator
 *  New Version to utilize Loops
 *  Do While
 */
//System Libraries
#include <cmath>
#include<iostream>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number, guess,r,count=0;
    //Input a number
    cout<<"Input a number to estimate its square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    do{
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //Output the first pass
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
    //}while(guess!=r); //My Preferred technique
    }while(abs(guess-r)>.01); //The Book preference
    //Exit stage right
    return 0;
}

