/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 10:38 PM
 * Purpose:Roman Numeral Converter
 */
//System Libraries
#include <iostream> 
#include <iomanip> 
#include <cstring> 
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
 int num; //Number
 //Prompt User
 cout << "Enter a number from 1-10" << endl;
 cin >> num;
 if ((num >= 1) && (num <= 10)){ //Conversion
  switch (num)
  {
   case 1:
   cout << "I";
   break;// End the case statement
   case 2:
   cout << "II";
   break;
   case 3:
   cout << "III";
   break;
   case 4:
   cout << "IV";
   break;
   case 5:
   cout << "V";  
   break;
   case 6:
   cout << "VI";
   break;
   case 7:
   cout << "VII";
   break;
   case 8:
   cout << "VIII";
   break;
   case 9:
   cout << "IX";
   break;
   case 10:
   cout << "X";
   break;
  }
 }else{ //If user did not enter the correct number
  cout << "READ THE PROBLEM! TRY AGAIN!!";}
    return 0;
}
