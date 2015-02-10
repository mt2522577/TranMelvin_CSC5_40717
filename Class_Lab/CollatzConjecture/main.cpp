/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on February 10, 2015, 8:52 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int coltzSq(int);
int cltzRng(int &,int &);
int main(int argc, char** argv) {
    //Test the function out
    //cout<<coltzSq(22)<<endl;
    int i=10,j=1,max;
    //Run the function and output the results
    max=cltzRng(i,j);
    //output the results
    cout<<i<<" "<<j<<" "<<max<<endl;
    return 0;
}
int cltzRng(int &strt,int &end){
    //Reorient strt and end based upon the
    //inputs not being ordered. In other swap
    //if you need to;
    if(strt>end){
        int temp=strt;
        strt=end;
        end=temp;
    }
    //Declare the maximum length
    int max=coltzSq(strt);
    for(int i=strt+1;i<=end;i++){
        int temp=coltzSq(i);
        if(temp>max)max=temp;
    }
    return max;
}
int coltzSq(int n){
    //Declare a counter
    int count=1;
    do{
        if(n%2)n=3*n+1;
        else n/=2;
        count++;
    }while(n>1);
    return count;
}
