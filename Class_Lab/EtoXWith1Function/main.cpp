/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 21, 2015, 9:06 AM
 * Purpose: Factorial
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int nFactrl(int);

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //Compare the results
    cout<<"Approximate e^x = "<<approxEx(x)<<endl;
    cout<<"Exact e^x       = "<<exp(x)<<endl;
    //Exit Stage right
    return 0;
}
int nFactrl(int n){
    //Declare the variable
    //Note: function only works for values 0 to 13
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13){
        for(int i=2;i<=n;i++){
            factorial*=i;
        }
        return factorial;
    }else{
        return -1;
    }
}