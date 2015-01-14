/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 14, 2015, 11:01 AM
 * Purpose:
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6; //Grams per pound
const float CMTNONS=3.527392e4f;//Conversion from Metric Ton to ounces
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu
    cout<<"Solution 1 Savitch 8thEd Chap 2 Problem 2"<<endl;
    cout<<"Solution 1 Savitch 9thEd Chap 2 Problem 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which solution you would like to see?"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        case 1:{
            cout<<"You have chosen Solution 1"<<endl;
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
            break;
        }
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
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
            break;
        }
        default: cout<<"Incorrect Choice!"<<endl;
    }
}
    return 0;
}

