/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 14, 2015, 11:19 AM
 * Purpose:
 */
//System Libraries
#include <iostream> //Keyboard/Monitor I/O
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float i;//Interest Rate per cent per year
    float t;//Temp Variables
    float l;//Loan amount $'s
    float mp; //Monthly Payment $'s
    unsigned short n; //Number of months
    //Input the variables required
    cout<<"What is the interest rate in per cent per year! (format float)"<<endl;
    cin>>i;
    i/=(100*12); //Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly payment
    if(i<0){
        mp=1/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-l);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = "<<mp<<endl;
    //Exit stage right!
    return 0;
}

