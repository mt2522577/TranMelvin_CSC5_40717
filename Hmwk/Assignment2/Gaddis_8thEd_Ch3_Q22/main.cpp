/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 12, 2015, 10:55 AM
 * Purpose use 
 */

//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream> //File i/o
#include <ctime> //Time Functions
#include <cmath> //MAth Function Libraries
#include <iomanip> //Format Libraries
using namespace std;

//User Libraries

//Global Constants
const float PIDIV4=atan(1); //Pi/=atan(1)
const float CNVDGRD=PIDIV4/45;//Pi/4/45 is the conversion
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Ser the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare file object
    ofstream output;
    output.open("SinCosTan.dat");
    //Declare the angle variable as an integer
    //in degrees,and the radian angle as a float
    int angDeg=rand()%361-180; //Angle [-180,180]
    float angRad=angDeg*CNVDGRD;
    //Output the angle to the screen
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    //Output the sin, cos, tan
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin ("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos ("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan ("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    //Close the stream
    output.close();
    return 0;
}

