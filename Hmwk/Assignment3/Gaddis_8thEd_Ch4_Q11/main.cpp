/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 2:17 PM
 * Purpose: Calculate Math problem with input
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
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Function
    unsigned short rad1, rad2, tot;
    rad1=rand()%1001;
    rad2=rand()%1001;
    cout<<"There will be two random numbers you need to add together."<<endl;
    cout<<endl;
    cout<<rad1<<" + "<<rad2<<endl;
    tot=rad1+rad2;
    cout<<endl;
    cout<<"Please enter the answer when ready."<<endl;
    char ans;
    cin>>ans;
    if(ans!=(!tot)){
        cout<<"Congradulations you can add!!!"<<endl;
    }
    else if (ans!=tot){
        cout<<"Sorry incorrect answer."<<endl;
                cout<<"The correct answer is "<<tot<<endl;
                cout<<"Please study some more!"<<endl;
                
    }
    
    
    return 0;
}
