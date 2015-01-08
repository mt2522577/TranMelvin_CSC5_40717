/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 8, 2015, 10:15 AM
 * Purpose: Stock Commission
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    float share=750,//Shares Kathryn bought
    price=35,//Cost per share
    sBroker=0.02,//Stock broker fee 2%
    totB= share*price, //Total price of shares bought
    comm=totB*sBroker, //Commission of broker
    totC=comm+totB; //Total of commission with broker fee
    //Showing user the price of per share that she bought it at and commission
    //Then finalizing the total cost of her investment
    cout<<"Kathryn bought 750 shares at a price of $35.00 per share."<<endl<<
          "Her total cost without commission is $ "<<totB<<"."<<endl<<
          "Her stockbroker fee is 2% and he gets $ "<<comm<<" for commission."
          <<endl<<
          "Kathryn total cost, including commision is $ "<<totC<<endl;
    return 0;
}

