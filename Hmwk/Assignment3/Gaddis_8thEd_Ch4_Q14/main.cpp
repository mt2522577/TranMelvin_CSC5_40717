/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 19, 2015, 1:11 PM
 * Purpose: Bank fees
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float bal,chec,fee; //Balance, checks, and fees
    cout<<fixed<<setprecision(2)<<showpoint;
    //Prompt User
    cout<<"What is the beginning balance of your account?"<<endl;
    cin>>bal;
    cout<<"How many checks have you wrote?"<<endl;
    cin>>chec;
    if (chec<=0)
        cout<<"Urgent! The Account is overdrawn! Please see call (1800)IMBROKE."
            <<endl<<"If you have further issues please go to class."<<endl;
    if (bal<=400){
        bal-=15;
        cout<<"Your account has been charge $15 fee for the"<<
            " balance being below $400"<<endl;
        cout<<"Current balance $ "<<bal<<endl;
    }
    if (bal>=400){
        cout<<"No bank fees applied as the account is over $400."<<endl;
    }
        if (chec<=19){
           fee=chec*0.10+10;
           cout<<"Your fee is $ "<<fee<<" which include a $10 bank fee."
               <<endl;
            bal-=fee;
            cout<<"Total balance is $ "<<bal<<endl;

        }
            else if (chec>=20 || chec<=39){
                    fee=chec*0.08+10;
                    cout<<"Your fee is $ "<<fee<<" which include a $10"
                        <<" bank fee."<<endl;
                    bal-=fee;
                    cout<<"Total balance is $ "<<bal<<endl;
            }
             else if (chec>=40 || chec<=59){
                     fee=chec*0.06+10;
                     cout<<"Your fee is $ "<<fee<<" which include a $10"
                         <<" bank fee."<<endl;
                     bal-=fee;
                     cout<<"Total balance is $ "<<bal<<endl;
            }
             else if (chec>60){
                     fee=chec*0.04+10;
                     cout<<"Your fee is $ "<<fee<<" which include a $10"
                         <<" bank fee."<<endl;
                     bal-=fee;
                     cout<<"Total balance is $ "<<bal<<endl;
            }     
    return 0;
}

