/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 24, 2015, 11:35 AM
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
    float rise=1.5f,year=1,fin;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The ocean level is currently rising 1.5 millimeter "
            <<"each year."<<endl;
    while (year<25+1){
        fin=year*rise;
        cout<<"Year -> "<<fin<<" millimeter"<<endl;
        year++;
    }
    return 0;
}

