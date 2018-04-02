/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on April 1st, 2018, 9:12 PM
 * Purpose:  This program calculates salary of each day and total after a period of time
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   x, // user inputs a series of integers
          greatest, //largest integer in the series 
          least;  // smallest integer in the series
     
    //Initialize Variables
    //x = 0;
    greatest = -999999;
    least = 9999999;
    
    //Process/Map inputs to outputs
     
    //Output data
    cout << "Enter a series of integer and -99 to stop" << endl;
    
    while (x != -99) 
    {     
        cin >> x;
        if (x < least) {
            least = x;
        }
        
        if (x > greatest) {
            greatest = x;
        }
        
    }        
    
    cout << "Greatest number: " << greatest << endl;
    cout << "Least number: " << least << endl;
        
 
    //Exit stage right!
    return 0;
}