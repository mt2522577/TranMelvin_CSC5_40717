/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 12:08 PM
 * Purpose: Book Club Points
 */
//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins Here!
int main(int argc, char** argv) {
   //Declare Variables
    float books;
    cout<<"How many books have you purchased this month?"<<endl;
    cin>>books;
    if (books==0){
        cout<<"You have 0 points"<<endl;}
    else if (books==1){
        cout<<"You have 5 points"<<endl;}
    else if (books==2){
        cout<<"You have 15 points"<<endl;}
    else if (books==3){
        cout<<"You have 30 points"<<endl;}
    else if (books>=4){
        cout<<"You have 60 points"<<endl;}
    else {
        cout<<"Not a Valid entry"<<endl;}
    return 0;
}

