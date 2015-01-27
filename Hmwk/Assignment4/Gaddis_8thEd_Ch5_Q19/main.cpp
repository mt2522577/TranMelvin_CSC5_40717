/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 22, 2015, 11:44 AM
 * Purpose: Budget Expenses
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User functions

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float expns, tot, budgt, fin; //Expenses, total, budget
    string name, input;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"What is your monthly budget?"<<endl;
    cin>>budgt;
    do{
        cout<<"Write the name of your expense follow by a "
            <<"space for the amount."<<endl;
        cin>>name>>expns;
        tot+=expns;
        cout<<"Do you have more expenses?"<<endl;
        cout<<"If yes. Please enter 'yes'."<<endl;
        cin>>input;
    }while(input=="yes"&&tot>=0);
    fin=budgt-tot;
    cout<<"Your remaining balance for the month is $ "<<fin<<endl;
    if(fin<0){
        cout<<"You need financial help!!!"<<endl;
        cout<<"You're under budget by $ "<<fin<<endl;
    }else if(fin>0){
        cout<<"Great!!! You still have money left over!"<<endl;
        cout<<"You're over budget by $ "<<fin<<endl;
    }else{
        cout<<"Congrats! you have budget your monthly expense on point!!"<<endl;
    }
    return 0;
}

