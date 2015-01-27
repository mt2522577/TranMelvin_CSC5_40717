/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 24, 2015, 11:18 AM
 * Purpose: Membership Fees
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Functions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float tax=0.04f,membr=2500, years,tot,fin; //Tax,Membership,years
    while(years<6){
        cout<<"Membership fee is 2,500 for a year."<<endl
            <<"It will increase 4% each year."<<endl;
        tot=tax*membr*years;
        years++;
        fin=tot+membr;
        cout<<fin<<endl;
    }
    
    return 0;
}

