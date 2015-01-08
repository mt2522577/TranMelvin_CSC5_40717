/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 7, 2015, 7:35 PM
 * Purpose: Miles per gallon
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Giving the statistic of the vehicle and calculations.
    float gallon=15, miles=375, MPG=miles/gallon;
    //Showing the calculation to the user.
    cout<<"A car that holds 15 gallons of gasoline"<<endl<<
          "travels 375 miles before refueling and"<<endl<<
          "average "<<MPG<<" MPG(miles per gallon)."<<endl;
    return 0;
}

