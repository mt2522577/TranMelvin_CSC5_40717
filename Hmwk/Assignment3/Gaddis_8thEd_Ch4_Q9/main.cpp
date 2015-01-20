/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 10:30 PM
 * Purpose: Minimum/Maximum
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float val1,val2;
    //Prompt User
    cout<<"Enter two number with a space: ";
    cin>>val1>>val2;
    if (val1<=val2){ //Used to find the highest/lowest number
         cout<<"The lowest number is "<<val1<<endl;
         cout<<"The Highest number is "<<val2<<endl;
    }
    else if (val1>=val2){
         cout<<"The lowest number is "<<val2<<endl;
         cout<<"The Highest number is "<<val1<<endl;
    }
    return 0;
}

