/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 14, 2015, 11:01 AM
 * Purpose:
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream> //File i/o
#include <ctime> //Time Functions
#include <cmath> //Math Functions
#include <iomanip> //Format Libraries
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6; //Grams per pound
const float CMTNONS=3.527392e4f;//Conversion from Metric Ton to ounces
const float PIDIV4=atan(1); //Pi/=atan(1)
const float CNVDGRD=PIDIV4/45;//Pi/4/45 is the conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Start the loop
    int choice;
    do{
        //Assignment 2 Menu
        cout<<"Solution 1 Savitch 8thEd Chap 2 Problem 2"<<endl;
        cout<<"Solution 2 Savitch 9thEd Chap 2 Problem 3"<<endl;
        cout<<"The solution for timer"<<endl;
        cin>>choice;
        cout<<endl;
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
                cout<<endl;
                break;}
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
                cout<<endl;
                break;}
            case 3:{
                //Initialize the random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare 2 Variables
                int x, y, begTim, endTim, ans, totTim;
                //Randomly choose 2 digits for each
                x=rand()%90+10;
                y=rand()%90+10;
                totTim= 10;
                begTim=static_cast<unsigned int>(time(0));
                //Prompt the user for an answer
                cout<<"What is "<<x<<" + "<<y<<endl;
                cout<<"You have "<<totTim<<" seconds to answer"<<endl;
                cout<<"Wait for the next prompt!!!"<<endl;
                do {
                    endTim=static_cast<unsigned int>(time(0));
                }while(endTim-begTim<5);
                cout<<"Your answer is?"<<endl;
                cin>>ans;
                 endTim=(static_cast<unsigned int>(time(0)));
                //Determine if correct
                 if(totTim>endTim-begTim){
                     if(ans==(x+y))cout<<"You are Correct"<<endl;
                     else cout<<"You are wrong"<<endl;
                 }else {
                     cout<<"You took too much time!!!"<<endl;
                     cout<<"Time allowed = "<<totTim<<endl;
                     cout<<"Your time = "<<endTim-begTim<<endl;
                 }cout<<endl;
                 break;}

            default: cout<<"You choose to exit!"<<endl;
        }
    }
    }while(choice>=1&&choice<=3);
    return 0;
}

