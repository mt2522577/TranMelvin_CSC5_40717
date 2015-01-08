/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 8, 2015, 7:50 AM
 * Purpose: Energy Drink Consumption
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
short custSrv=16500; //Customer Surveyed
char perEDrk=15;//percent Energy Drinkers
char perCDrk=58;//percent Citrus Drinkers
//Calculate customer numbers requested
short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
//Output the results
cout<<"Customers surveyed that are Energy Drinkers = ";
cout<<custE<<endl;
cout<<"Customers surveyed that are Citrus Drinkers = ";
cout<<custC<<endl;

//Exit stage right
return 0;
}
