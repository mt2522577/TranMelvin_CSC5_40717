/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 11:35 AM
 * Purpose: Babylonian square root calculator
 *  New Version to utilize Loops
 *  For 
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
    for(int count=1;abs(guess-r)>.01;count++){
        r=number/guess;
        guess=(guess+r)/2;
        //Output the first pass
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
    }
    //Exit stage right
    return 0;
}

