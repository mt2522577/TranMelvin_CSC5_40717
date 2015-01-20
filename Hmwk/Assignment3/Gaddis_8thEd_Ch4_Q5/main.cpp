/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 9:03 PM
 * Purpose: Find BMI
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float weight,height,BMI;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Please enter your weight in pounds."<<endl;
    cin>>weight;
    cout<<"Please enter your height in inches."<<endl;
    cin>>height;
    BMI=weight*703/(height*height);
    if (BMI<18.5){
            cout<<"Your BMI is "<<BMI<<endl;
            cout<<"You're underweight please consume more food!"<<endl;
    }
    else if (BMI>18.5&&BMI<25){
        cout<<"Your BMI is "<<BMI<<endl;
        cout<<"You're healthy!!! Keep up the good work!"<<endl;
    }
    else if(BMI>25){
        cout<<"Your BMI is "<<BMI<<endl;
    cout<<"Please consult a doctor or go to the gym for being obese."<<endl;
    }
            
    return 0;
}

