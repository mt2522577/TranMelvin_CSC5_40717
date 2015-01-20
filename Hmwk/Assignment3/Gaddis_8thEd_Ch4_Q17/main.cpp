/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 2:32 PM
 * Purpose: Personal Best
 */

//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time1,time2,time3;
    string date,date2,date3, name;
    //Prompt user
    cout<<"Please enter the runner first name."<<endl;
    
    cout<<"Enter the time in seconds followed with a space for the date "
        <<"EX:(12/19/14)"<<endl;
    cin>>time1;
    cout<<"Enter time and date."<<endl;
    cin>>time2;
    cout<<"Enter time and date."<<endl;
    cin>>time3;
    if (time1<time2<time3){
        cout<<time<<"red "<<time2<<" "<<time3<<endl;
    }
    return 0;
}

