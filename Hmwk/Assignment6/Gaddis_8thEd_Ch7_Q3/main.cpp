/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on February 9, 2015, 8:12 PM
 */
//System Libraries
#include <iostream> 
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!!!
int main(int argc, char** argv) { 
string names[5]; 
int sales[5]; 
int i,hSel=0,hName,lSel=0,lName; 
names[0] = "Mild"; 
names[1] = "Medium"; 
names[2] = "Sweet"; 
names[3] = "Hot"; 
names[4] = "Zesty"; 
int total=0; 
for(i=0;i<=4;i++){ 
cout<<"Enter number of sold "<<names[i]<<" jars: "; 
cin>>sales[i]; 
total = total + sales[i]; 
    if(i==0){
        hSel=sales[i];
        hName=i;lSel=sales[i];
        lName = i;
         }if(hSel<sales[i]){
             hSel=sales[i];
             hName=i;
             }if(lSel>sales[i]){
                 lSel=sales[i];
                 lName=i; } 
}
cout<<"There were sold:  "<<endl; 
for(i=0;i<=4;i++){ 
cout<<sales[i]<<" "<<names[i]<<" jars"<<""<<endl; 
} 
cout<<"Total sales: "<<total<<" jars"<<endl; 
cout<<"Highest sales: "<<hSel<<" ("<<names[hName]<<" salsa)"<<endl; 
cout<<"Lowest sales: "<<lSel<<" ("<<names[lName]<<" salsa)"<<endl;
return 0;
}