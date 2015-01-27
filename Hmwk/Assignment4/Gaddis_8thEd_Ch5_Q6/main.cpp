/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 24, 2015, 12:04 PM
 * Purpose: Membership Fees
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Functions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hour,dst,mph; //Hours, Distance Traveled, speed
    //Prompt User
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>mph;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hour;
    dst=mph*hour; //Formula for distance
    //Output results
    cout<<"Hours   Distance Traveled (miles)"<<endl;
    cout<<"------------------------------------"<<endl;
    for(int count=1; count<=hour; count++){
        cout<<" " <<count<<"              "<<mph*count<<endl;
    }     
    return 0;
}

