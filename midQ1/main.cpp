/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 27, 2015, 7:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char ans;
    do{
    //Prompt User
    cout<<"How many lines would you like?"<<endl;
        int row;//Declare variables
        cin>>row;//User input
        cout<<endl;//blank spaces 
        cout<<endl;
    //Declare variables in for loop
        for(int a=row; a>=1; a--){ //outer loop
            for(int col=1; col<=a; col++){ //inner loop
                cout<<" ";//Used blank spaces because if I put 'col' it will
                //put the number from descending order Ex:1234567
                                                        //123456
            }                                           //12345
                cout<<a<<endl;//Output the results without the beginning numbers
                cout<<endl;
        }
        cout<<"would you like to continue?"<<endl;
        cin>>ans;
                
    }while(ans=='y'||ans=='Y');
    //Exit program
    return 0;
}

