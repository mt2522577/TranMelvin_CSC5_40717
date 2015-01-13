/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 12, 2015, 11:32 AM
 * Purpose: My Car Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare Variable
    float intRate=0.0319f/12;
    float msrplus=4e4f; //Loan amount for Buick Avenir
    char npaymnt=60; //Number of monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),npaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    cout<<"Interest per year = "<<intRate*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(npaymnt)<<endl;
    cout<<"Car loan amount = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    
    return 0;
}

