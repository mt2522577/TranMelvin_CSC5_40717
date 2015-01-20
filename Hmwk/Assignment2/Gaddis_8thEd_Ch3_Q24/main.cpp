1/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 11:32 PM
 * Purpose: Word Game
 */
//System Libraries
#include<iostream>//Keyboard/Monitor I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
 //Declare Function
    //Getting information on user
    string name,age,city,coll,pro,anml,pet;
    cout<<"Please enter your first name."<<endl;
    cin>>name;
    cout<<"Please enter your age."<<endl;
    cin>>age;
    cout<<"Please enter the city you reside in."<<endl;
    cin>>city;
    cout<<"Please enter your college."<<endl;
    cin>>coll;
    cout<<"Please enter your profession."<<endl;
    cin>>pro;
    cout<<"Please enter a type of animal."<<endl;
    cin>>anml;
    cout<<"Please enter a pet name."<<endl;
    cin>>pet;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."
            <<endl<<
          "At the age of "<<age<<", "<<name<<" went to college at "<<coll<<"."
            <<endl<<
            name<<" graduated and went to work as a "<<pro<<"."
            <<endl<<
            "Then, "<<name<<" adopted a(n) "<<anml<<" named "<<pet<<"."
            <<endl<<
            "They both lived in happily ever after!"<<endl;
           
            
    
    return 0;
}

