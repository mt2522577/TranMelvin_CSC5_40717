/* 
 * File:   main.cpp
 * Author: melvintran
 *
 * Created on February 11, 2015, 8:52 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ofstream output;
    output.open("test.dat");
    cout<<"@"<<endl;
    output<<"!"<<endl;
    output.close();
    return 0;
}

