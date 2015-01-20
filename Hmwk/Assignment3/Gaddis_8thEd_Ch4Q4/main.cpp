/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 11:11 PM
 * Purpose:
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!!
int main(int argc, char** argv) {
    //Declare Variables
    float length1, length2, width1, width2, area1, area2;
    //Prompt User
    cout << "Enter the length in inches for rectangle 1: ";
    cin >> length1;
    cout << "Enter the width in inches for rectangle 1: ";
    cin >> width1;
    cout << "Enter the length in inches for rectangle 2: ";
    cin >> length2;
    cout << "Enter the width for in inches rectangle 2: ";
    cin >> width2;
    //Equation
    area1 = length1 * width1;
    area2 = length2 * width2;
   //Evaluating rectangle
    if (area1 > area2){
     cout << "The area of rectangle 1 is greater than the area of rectangle 2!"
          << endl;}
    else if (area2 > area1){
     cout << "The area of rectangle 2 is greater than the area of rectangle 1!"
             << endl;}
    else if (area1 == area2){
     cout << "The area of both rectangles are the same!" << endl;}


    return 0;
}


