/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 26, 2015, 10:35 PM
 * Purpose: Display a pattern
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
    cout<<"Pattern A"<<endl;
        for(int a=0; a<10; a++){//Outer loop
            int col= a*1+1; 
            for(int b=0; b<col; b++){ //inner loop
                cout<<"X";
            }cout<<endl;}
    cout<<endl;
    cout<<endl;
    cout<<"Pattern B"<<endl;
        for(int a=10; a>0; a--){//Outer loop 
            for(int b=a; b>0; b--){ //inner loop
                cout<<"X";
            }cout<<endl;}
    return 0;
}
