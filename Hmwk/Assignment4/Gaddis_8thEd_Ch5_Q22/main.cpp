/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 26, 2015, 10:26 PM
 * Purpose: Display 'X'
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    cout<<"Please enter a number 1 to 15."<<endl;
            cin>>num;
    for(int a=0; a<num; a++){//Outer loop
        for(int b=0; b<num; b++){ //inner loop
            cout<<"X";
        }cout<<endl;
    }
    return 0;
}

