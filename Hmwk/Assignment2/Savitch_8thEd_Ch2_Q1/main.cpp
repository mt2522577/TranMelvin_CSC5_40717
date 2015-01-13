/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 10:55 AM
 * Purpose: Metric Conversion
 */
//System Libraries
#include <cstdlib>
#include<iostream>
using namespace std;

//User Libraries

//GLobal Constants
const float CMTNONS=3.527392e4f;//Conversion from Metric Ton to ounces
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal contents in ounces
    float wtPackTn;//Weight of cereal contents in Metric Tons
    float nPackTn; // Number of cereal boxes in a Metric Ton
    //Prompt user for cereal weighs.
    cout<<"Input the number on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
    cout<<"Numbers of cereal boxes in a metric ton => " <<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
                //Declare variables
            float wtPackOz;//Weight of cereal contents in ounces
            float wtPackTn;//Weight of cereal contents in Metric Tons
            float nPackTn; // Number of cereal boxes in a Metric Ton
            //Prompt user for cereal weighs.
            cout<<"Input the number on the cereal"<<endl;
            cout<<"box to convert to metric tons."<<endl;
            cout<<"Format is float ddd.ddd (ounces)"<<endl;
            cin>>wtPackOz;
            //Calculate the results
            wtPackTn=wtPackOz/CMTNONS;
            nPackTn=1/wtPackTn;
            //Output the results
            cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
            cout<<"Numbers of cereal boxes in a metric ton => " <<nPackTn<<endl;
    }
    return 0;
}

