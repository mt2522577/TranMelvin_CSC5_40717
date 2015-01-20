/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 20, 2015, 10:30 AM
 * Purpose: 
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    char thPick=23,flage=0;
    bool computer=false;
    short nPckRmv;
    //Playing the game
    do{
        computer=false;
        do{
        //Ask player how many tooth picks to remove
        cout<<"There are "<<thPick<<" left to remove"<<endl;
        cout<<"How many tooth picks do you want to remove"<<endl;
        cout<<"Choose 1,2, or 3"<<endl;
        cin>>nPckRmv;
    }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
    //Remove the number of toothpicks
    thPick-=nPckRmv;
    //Designate the computer
    computer=true;
    //Utilized the computer
    if (thPick>4){
    nPckRmv>4=4-nPckRmv{
    }else if (thPick>2=2&&thPick{
    }else if (thPick==1){
                thPick=0}
    }              
        computer=true
    }while(thPick>1);  
    //Out put the winner and loser
    //Utize logic from the book
    if(computer){
        cout<<"Computer wins you lose"<<endl;
    }else{
        cout<<"Computer loses we win"<<endl;
    }
    
    //Exit the game
    return 0;
}

