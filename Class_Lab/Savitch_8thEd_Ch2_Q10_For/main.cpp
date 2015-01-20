/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 15, 2015, 11:22 AM
 * Purpose:
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
   //Declare Variables
    int sum=0,sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //Prompt for a value and sum it
    for(int count=1;count<=10;count++){
    cout<<endl<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //OutPut the results
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive sum =  "<<sumPos<<endl;
    cout<<"Negative sum =  "<<sumNeg<<endl;
    cout<<"Even sum =     "<<sumEven<<endl;
    cout<<"Odd sum =      "<<sumOdd<<endl;
    }
    return 0;
}

