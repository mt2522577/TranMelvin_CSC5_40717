/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 14, 2015, 10:35 AM
 * Purpose: Weight to kill a person
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6; //Grams per pound
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const float CONC=1e-3f;//Sweetener Concentration
    float wtCoke=3.5e2f; //Weight of coke in grams
    float kMouse=5.0f; //Quantity of sweetener that kills a mouse in grams
    float wtMouse=3.5e1f; //Weight of mouse in grams
    float kPer,wtDsPer;
    int nCans;
    //Input the desire weight of a person
    cout<<"Input your desired weight in pounds"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//Convert to grams
    //Calculations
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limit of what you can drink
    cout<<"Number of cans of diet coke ";
    cout<<"that will kill you = "<<nCans<<endl;
    //Exit stage right!
    return 0;
}

