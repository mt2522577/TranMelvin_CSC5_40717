/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on February 10, 2015, 8:29 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototype

//Execution begins here!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Fill the Array ADT
    int size=100,perLine=10;
    Array array;//Declare the array object
    array.filAray(size);
    //Sorting the array with Mark sort
    array.mrkSort();
    //Print the Array ADT
    array.prntAry(perLine);
    //Clean up
    array.destroy();
    //Exit Stage Right!!!  
    return 0;
}
