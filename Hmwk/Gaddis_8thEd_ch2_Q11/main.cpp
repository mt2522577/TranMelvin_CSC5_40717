/* 
 * File:   main.cpp
 * Author: melvintran
 * Created on January 7, 2015, 8:22 PM
 * Purpose: Distant per tank of gas
 */

#include <iostream>

using namespace std;

//User libraries

//Global constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    float carG=20, //Car Gallon
          avgT=23.5, //Average around Town
          avgH=28.9, //Average driving Highway
          DisT= carG*avgT, //Distance of car traveling around town
          DisH= carG*avgH; //Distance of car traveling on Highway
    //Showing user the average and distance of the same car traveling in
    //different situations.
    cout<<"A car with a 20-gallon gas tank travels "<<DisT<<" miles"<<endl<<
          "and average "<<avgT<<" MPG(miles per gallon) around town."<<endl<<
          "The same vehicle can travel "<<DisH<<" miles"<<endl<<
          "but average "<<avgH<<" MPG while driving on the highway."<<endl;
    return 0;
}

