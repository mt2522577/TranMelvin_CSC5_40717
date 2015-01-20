/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 13, 2015, 9:15 AM
 * Purpose: 
 */
//System Libraries
#include <cstdlib>
#include<iostream>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X||Y)"<<
          "!X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    for(int X=0;X<=1;X++){
        for(int Y=0;Y<=1;Y++){
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<"  ";
        cout<<(!X?'T':'F')<<"  ";
        cout<<(!Y?'T':'F')<<"  ";
        cout<<(X&&Y?'T':'F')<<"     ";
        cout<<(X||Y?'T':'F')<<"   ";
        cout<<(X^Y?'T':'F')<<"    ";
        cout<<(X^Y^Y?'T':'F')<<"     ";
        cout<<(X^Y^X?'T':'F')<<"       ";
        cout<<(!(X||Y)?'T':'F')<<"     ";
        cout<<(!X&&!Y?'T':'F')<<"       ";
        cout<<(!(X&&Y)?'T':'F')<<"      ";
        cout<<(!X||!Y?'T':'F')<<" ";
        cout<<endl;
    }
}
    //Exit Stage Right!
    return 0;
}

