/* 
 * File:   main.cpp
 * Author: Melvin Tran
 * Created on January 14, 2015, 11:01 AM
 * Purpose:
 */
//System Libraries
#include <cstdlib> //Randon srand(), rand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream> //File i/o
#include <ctime> //Time Functions
#include <cmath> //Math Functions
#include <iomanip> //Format Libraries
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6; //Grams per pound
const float CMTNONS=3.527392e4f;//Conversion from Metric Ton to ounces
const float PIDIV4=atan(1); //Pi/=atan(1)
const float CNVDGRD=PIDIV4/45;//Pi/4/45 is the conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu
    cout<<"Solution 1 Savitch 8thEd Chap 2 Problem 2"<<endl;
    cout<<"Solution 2 Savitch 9thEd Chap 2 Problem 3"<<endl;
    cout<<"Solution 3 Gaddis 7thEd Chap 3 Problem 11"<<endl;
    cout<<"Solution 4 Gaddis 8thEd Chap 3 Problem 9"<<endl;
    cout<<"Solution 5 Gaddis 8thEd Chap 3 Problem 12"<<endl;
    cout<<"Solution 6 Gaddis 8thEd Chap 3 Problem 17"<<endl;
    cout<<"Solution 7 Gaddis 8thEd Chap 3 Problem 19"<<endl;
    cout<<"Solution 8 Gaddis 8thEd Chap 3 Problem 22"<<endl;
    cout<<"Solution 9 Gaddis 8thEd Chap 3 Problem 24"<<endl;
    cout<<"Input which solution you would like to see?"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        case 1:{
            cout<<"You have chosen Solution 1"<<endl;
            //Declare Variables
            const float CONC=1e-3f;//Sweetener Concentration
            float wtCoke=3.5e2f; //Weight of coke in grams
            float kMouse=5.0f; //Quantity of sweetener that kills a mouse in grams
            float wtMouse=3.5e1f; //Weight of mouse in grams
            float kPer,wtDsPer;
            int nCans;
            //Input the desire weight of a person
            cout<<"Input your desired weight in pounds"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            wtDsPer*=CNVLBGM;//Convert to grams
            //Calculations
            kPer=kMouse/wtMouse*wtDsPer;
            nCans=kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;
            break;}
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
            //Declare variables
            float wtPackOz;//Weight of cereal contents in ounces
            float wtPackTn;//Weight of cereal contents in Metric Tons
            float nPackTn; // Number of cereal boxes in a Metric Ton
            //Prompt user for cereal weighs.
            cout<<"Input the number on the cereal"<<endl;
            cout<<"box to convert to metric tons."<<endl;
            cout<<"Format is float ddd.ddd (ounces)"<<endl;
            cin>>wtPackOz;
            //Calculate the results
            wtPackTn=wtPackOz/CMTNONS;
            nPackTn=1/wtPackTn;
            //Output the results
            cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
            cout<<"Numbers of cereal boxes in a metric ton => " <<nPackTn<<endl;
            //Ask if user would like to repeat the calculation
            cout<<"Would you like to repeat the calculation?"<<endl;
            cout<<"Or make a new calculation?"<<endl;
            cout<<"Type Y for yes and N for no."<<endl;
            char answer;
            cin>>answer;
            if(answer=='Y'||answer=='y'){
                //Declare variables
            float wtPackOz;//Weight of cereal contents in ounces
            float wtPackTn;//Weight of cereal contents in Metric Tons
            float nPackTn; // Number of cereal boxes in a Metric Ton
            //Prompt user for cereal weighs.
            cout<<"Input the number on the cereal"<<endl;
            cout<<"box to convert to metric tons."<<endl;
            cout<<"Format is float ddd.ddd (ounces)"<<endl;
            cin>>wtPackOz;
            //Calculate the results
            wtPackTn=wtPackOz/CMTNONS;
            nPackTn=1/wtPackTn;
            //Output the results
            cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
            cout<<"Numbers of cereal boxes in a metric ton => " <<nPackTn<<endl;
            break;}
        case 3:{
             //Declare variables and initialize
             float bcToDlr=232.8; //Jan 13th,2015 10:17am
             float erToDlr=0.849381; //Same Date
             float ynToDlr=118.03; //Same Date
             float bitcoin,dollars,euros,yen;
             //Input the number of bitcoin then convert
             cout<<"Input the number of bitcoin "<<endl;
             cout<<"You wish to purchase."<<endl;
             cin>>bitcoin;
             //convert to all the currencies
             dollars=bcToDlr*bitcoin;
             euros=erToDlr*dollars;
             yen=ynToDlr*dollars;
             //Output the results
             cout.setf(ios::fixed);
             cout.precision(2);
             cout<<bitcoin<<" =   "<<dollars<<" (dollars)"<<endl;
             cout<<bitcoin<<" =   "<<euros<<" (dollars)"<<endl;
             cout<<bitcoin<<" = "<<yen<<" (dollars)"<<endl; 
             break;}
        case 4:{
            //Declare Variables
           float cookies, cals;// cookies and calories=300 per 10 serving
           cout<<"How many whole cookies did you eat?"<<endl;
           //Prompt user
           cin>>cookies; //User input
           cals=cookies*30; //Equation for calories
           //output
           cout<<"You have consumed "<<cals<<" calories."<<endl;
           break;}
        case 5:{
            //Declare Functions
            float faren, cel; //Temperature
            //Prompt User
            cout<<"Type in a Celsius temperature to convert it to Fahrenheit."<<endl;
            //Input from user
            cin>>cel;
            faren=1.8f*cel+32;//Conversion
            //Output
            cout<<faren<<" Fahrenheit"<<endl;
            break;}
        case 6:{
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Declare Function
            unsigned short rad1, rad2, tot;
            rad1=rand()%1001;
            rad2=rand()%1001;
            cout<<"There will be two random numbers you need to add together."<<endl;
            cout<<endl;
            cout<<rad1<<" + "<<rad2<<endl;
            cout<<endl;
            cout<<"When ready to see the answer type Y for yes."<<endl;
            char entr;
            cin>>entr;
            if(entr=='Y'||entr=='y')
            tot=rad1+rad2;
            cout<<endl;
            cout<<endl;
            cout<<"The total of the added number is "<<tot;
            break;}
        case 7:{
            //Declare Variable
            float intRate=0.0319f/12;
            float msrplus=4e4f; //Loan amount for Buick Avenir
            char npaymnt=60; //Number of monthly payments
            //Calculate the monthly payments
            float temp=pow((1+intRate),npaymnt);
            float mPay=intRate*temp*msrplus/(temp-1);
            //Output the inputs
            cout<<"Interest per year = "<<intRate*100*12<<endl;
            cout<<"Number of payments = "<<static_cast<int>(npaymnt)<<endl;
            cout<<"Car loan amount = $"<<msrplus<<endl;
            //Output our car payment
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"My Avenir will cost $"<<mPay<<endl;
            break;}
        case 8:{
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
            break;}
        case 9:{
            //Declare Function
            //Getting information on user
            string name,age,city,coll,pro,anml,pet;
            cout<<"Please enter your first name."<<endl;
            cin>>name;
            cout<<"Please enter your age."<<endl;
            cin>>age;
            cout<<"Please enter the city you reside in."<<endl;
            cin>>city;
            cout<<"Please enter your college."<<endl;
            cin>>coll;
            cout<<"Please enter your profession."<<endl;
            cin>>pro;
            cout<<"Please enter a type of animal."<<endl;
            cin>>anml;
            cout<<"Please enter a pet name."<<endl;
            cin>>pet;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"There once was a person named "<<name<<" who lived in "<<
                    city<<"."<<endl<<
                  "At the age of "<<age<<", "<<name<<" went to college at "
                  <<coll<<"."<<endl<<
                  name<<" graduated and went to work as a "<<pro<<"."
                  <<endl<<
                  "Then, "<<name<<" adopted a(n) "<<anml<<" named "<<pet<<"."
                  <<endl<<
                  "They both lived in happily ever after!"<<endl;
                break;}
            
        default: cout<<"Incorrect Choice!"<<endl;
    }
}
    return 0;
}

