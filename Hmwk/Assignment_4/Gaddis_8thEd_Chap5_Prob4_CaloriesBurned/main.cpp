/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 31th, 2018, 11:25 PM
 * Purpose:  This program calculates salary of each day and total after a period of time
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
     
    //Initialize Variables
    
    for (int i = 5; i <= 30; i += 5) // i = minute in increment of 5 min
    {
        cout << "Calories burned in " << i << " minutes is " << (3.6 * i) << endl;
    }
    
 
    //Exit stage right!
    return 0;
}