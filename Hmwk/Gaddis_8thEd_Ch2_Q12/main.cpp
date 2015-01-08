/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 7, 2015, 8:49 PM
 * Purpose: Land Calculation
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    float acre=43560, //One acre of land
          tractL=391876, //Area of unknown acre
          AcrsTot = tractL / acre; //Solution to find acre
    //Showing user the calculation of sq ft to acres
    cout<<"One acre of land is equivalent to 43,560 sq ft(square feet)."<<endl<<
          "A tract of land have 391,876 sq ft which is equivalent to "<<endl<<
           AcrsTot<<" acres."<<endl;
    return 0;
}

