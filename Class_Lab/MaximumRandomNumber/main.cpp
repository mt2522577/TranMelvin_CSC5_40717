/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 21, 2015, 8:20 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const unsigned int MAXRAND=pow(2,31);

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set Random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Max Variables
    int loop=1000000;
    int max=rand();
    //Now loop to find the maximum random number
    for(int i=2;i<=loop;i++){
        int r=rand();
        if(r>max)max=r;
    }
    //Now Output the results
    cout<<"2'31"
    return 0;
}

