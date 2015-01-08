/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 7, 2015, 9:50 PM
 * Purpose: Circuit Board price
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    float Cboard=0.35, //35% of profit
          Pboard= 14.95, //Price of circuit board
          Tot= Pboard*Cboard, //Finding tax
          ToTax=Tot+Pboard; //Total price with tax
    //Showing user the tax and final price of the product.
    cout<<"A company sells circuit boards at a 35 percent profit."<<endl<<
          "They receive the boards at a price of $ 14.95 and make a"<<endl<<
          "profit of $ "<<Tot<<" which totals $ "<<ToTax<<endl<<
          "for the final sale price."<<endl;
    return 0;
}

