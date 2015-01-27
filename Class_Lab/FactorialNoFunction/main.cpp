/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 21, 2015, 8:53 AM
 * Purpose: Factorial
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    int nFactrl=1,n;
    //Prompt User for factorial
    cout<<"What N would you like to use to"<<endl;
    cout<<"calculate N!"<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
   
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit Stage right!
    return 0;
}

