/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 12:34 PM
 * Purpose: Discounted Software
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    //Quantity, Discount and the total
    float quan, dis,tot,tot1,tot2,tot3;
    //User input
    cout<<"How many Software program have you purchase?"<<endl;
    cout<<"Each program is $99."<<endl;
    cout<<"In order to receive discount must purchase more than 10 units."
            <<endl;
    cin>>quan;//quantity of item sold
    if (quan>=10 || quan<=19){ //showing the range
        tot=(quan*99)*0.20;//Equation for the first discount
                //Display the output
                cout<<"The total cost with a 20 percent discount is $"<<tot<<
                endl;
    }
    else if (quan>=20 || quan<=49){ //showing the range
        tot1=(quan*99)*0.30;//Equation for the second discount
                //Display the output
                cout<<"The total cost with a 30 percent discount is $"<<tot1<<
                endl;
    }
    else if (quan>=50 || quan<=99){ //showing the range
        tot2=(quan*99)*0.40;//Equation for the third discount
                //Display the output
                cout<<"The total cost with a 40 percent discount is $"<<tot2<<
                endl;
    }
    else if (quan>=100){ //showing the range
        tot3=(quan*99)*0.50;//Equation for the fourth discount
                //Display the output
                cout<<"The total cost with a 50 percent discount is $"<<tot3<<
                endl;
    }
    else //Last option if entered the wrong thing
        cout<<"Error"<<endl;
    return 0;
}

