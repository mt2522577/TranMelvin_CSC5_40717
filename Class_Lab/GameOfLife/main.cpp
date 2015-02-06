/* 
 * File:   main.cpp
 * Author: melvintran
 *
 * Created on February 4, 2015, 10:59 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int COL=30;

//Function Prototype
void filAray(char [][COL],int,char);
void prntAry(char [][COL],int);
void inject(char [][COL],int,char);

//Execution begins here!
int main(int argc, char** argv) {

    return 0;
}
void inject(char a[][COL],int pROW,int pCol,char c){
    
}
void prntAry(char a[][COL],int ROW){
    cout<<endl;
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            a[r] [c]=c;
        }
    }
}
void filAray(char a[][COL],int ROW,char c){
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            a[r] [c]=c;
        }
    }
}
