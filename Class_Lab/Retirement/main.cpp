/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 27, 2015, 9:10 AM
 * Purpose: Use the Babylonian 10
 *          for retirement.
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User libraries

//Global Constants

//Function Prototype
//For overloaded functions return type does not matter
//Only the types associated with parameter in the argument list
//Pass by reference vs. pass by value does not count
//when overloading the function name
float retirement(float,float,float,int);
void retirement(float &,float,float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=75000.0f;
    float invRate=0.05f;
    float defPrct=0.20f;//Babylonian 10
    float ndSave=salary/invRate;
    float retSav=0;
    float nmYears;
    //Heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You need to save $"<<ndSave<<endl;
    cout<<"Year      Savings"<<endl;
    //Calculate When We can Retire
    for(int year=1;retSav<=ndSave;year++){
        //for(int year=1;retSav<=60;year++)
        retSav=retirement(0.0,invRate,defPrct*salary,year);
        cout<<setw(4)<<year<<setw(12)<<retSav<<endl;
    }
    //Exit Stage Right!
    return 0;
}
void retirement(float &p,float i,float d,float n){
    for (int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
}
float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
