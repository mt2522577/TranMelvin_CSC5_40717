/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 7, 2015, 6:58 PM
 * Purpose: Figuring out sales tax on a purchase
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    float item_1=15.95, // Prices of each item purchased.
          item_2=24.95,
          item_3=6.95,
          item_4=12.95,
          item_5=3.95,
          total=item_1+item_2+item_3+item_4+item_5, //Tallying up the price.
          tax=0.07, //Tax 7%
          total_1=total*tax, //Getting the tax amount.
          //Adding the tax and original price to give final price.
          finalP=total+total_1; 
          //Showing what the customer purchased with prices
          //and giving the final price with tax.
    cout<<"A customer purchased five items and the prices for each item are."
          <<endl<<
          "Price of item 1 = $ "<<item_1<<endl<<
          "Price of item 2 = $ "<<item_2<<endl<<
          "Price of item 3 = $ "<<item_3<<endl<<
          "Price of item 4 = $ "<<item_4<<endl<<
          "Price of item 5 = $ "<<item_5<<endl<<
          "The total of the five item is $ "<<total<<endl<<
          "Sales tax is 7%, which make the grand total $ "<<
          finalP<<endl;
            
            
    
    return 0;
}

