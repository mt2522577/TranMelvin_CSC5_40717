/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 10:06 PM
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float weight,mass;
    cout<<"Please enter a mass of an object in kilograms."<<endl;
    cin>>mass;
    cout<<fixed<<setprecision(2)<<showpoint;
    weight=mass*9.8;
    if (weight>1000){
        cout<<"The weight of Newtons is too heavy."<<endl;
    }
    else if (weight<10){
        cout<<"The weight of Newtons is too light."<<endl;
    }
    else if (weight>10||weight<1000){
        cout<<"The weight of Newtons is "<<weight<<endl;
    }
    return 0;
}

