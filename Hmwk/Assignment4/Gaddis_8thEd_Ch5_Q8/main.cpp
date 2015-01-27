/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 26, 2015, 7:56 AM
 */
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <cmath> //Math Function Libraries
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Function
    unsigned short rad1, rad2, tot;
    rad1=rand()%51;
    rad2=rand()%51;
    cout<<"Please select which math functions you want to do."<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"There will be two random numbers you need to combine."<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:{
            cout<<"You have chosen addition!"<<endl;
            cout<<rad1<<" + "<<rad2<<endl;
            cout<<endl;
            cout<<"Please enter the answer when ready."<<endl;
            tot=rad1+rad2;
            float ans;
            cin>>ans;
            if (ans!=(tot)){
            cout<<"Sorry incorrect answer."<<endl;
                    cout<<"The correct answer is "<<tot<<endl;
                    cout<<"Please study some more!"<<endl;
            }else if(ans!=(!tot)){
            cout<<"Congratulations you can add!!!"<<endl;}
            break; }
    case 2:{
            if (rad1>=rad2){
            cout<<"You have chosen subtraction!"<<endl;
            tot=rad1-rad2;
            cout<<rad1<<" - "<<rad2<<endl;
            }else{
            cout<<"You have chosen subtraction!"<<endl;
            tot=rad2-rad1;
            cout<<rad2<<" - "<<rad1<<endl;}
            cout<<endl;
            cout<<fixed<<setprecision(2)<<endl;
            cout<<"Please enter the answer when ready."<<endl;
            float ans;
            cin>>ans;
            if (ans!=(tot)){
            cout<<"Sorry incorrect answer."<<endl;
                    cout<<"The correct answer is "<<tot<<endl;
                    cout<<"Please study some more!"<<endl;
            }else if(ans!=(!tot)){
            cout<<"Congratulations you can add!!!"<<endl;}
            break; }
    case 3:{
            if (rad1>=rad2){
            cout<<"You have chosen multiplication!"<<endl;
            tot=rad1*rad2;
            cout<<rad1<<" * "<<rad2<<endl;
            }else{
            cout<<"You have chosen multiplication!"<<endl;
            tot=rad2*rad1;
            cout<<rad2<<" * "<<rad1<<endl;}
            cout<<endl;
            cout<<fixed<<setprecision(2)<<endl;
            cout<<"Please enter the answer when ready."<<endl;
            float ans;
            cin>>ans;
            if (ans!=tot){
            cout<<"Sorry incorrect answer."<<endl;
                cout<<"The correct answer is "<<tot<<endl;
                cout<<"Please study some more!"<<endl;
            }else if(ans!=(!tot)){
            cout<<"Congratulations you can add!!!"<<endl;}
            break;}
    case 4:{
            if (rad1>=rad2){
            cout<<"You have chosen division!"<<endl;
            tot=rad1/rad2;
            cout<<rad1<<" / "<<rad2<<endl;
            }else{
            cout<<"You have chosen division!"<<endl;
            tot=rad2/rad1;
            cout<<rad2<<" / "<<rad1<<endl;}
            cout<<fixed<<setprecision(2)<<endl;
            cout<<endl;
            cout<<"Please enter the answer when ready."<<endl;
            float ans;
            cin>>ans;
            if (ans!=tot){
                cout<<"Sorry incorrect answer."<<endl;
                        cout<<"The correct answer is "<<tot<<endl;
                        cout<<"Please study some more!"<<endl;
            }else if(ans!=(!tot)){
            cout<<"Congratulations you can add!!!"<<endl;}
            break;}
            default:
            cout<<"Error. Please select the correct number."<<endl;
    }
    return 0;
}

