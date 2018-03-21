/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 3:21 PM
 * Purpose: This program finds larger number 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries
//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x,y,larger,smaller; 
    
    //Initial Variables
   
    //Map/Process Inputs to Outputs
    
    //Display Outputs
   cout << "Enter 2 numbers to compare" << endl;
   cin >> x >> y ;
   larger = (x > y )? x:y;
   smaller = (x < y)? x:y;
   cout << "Larger number = " << larger << endl;
   cout << "Smaller number = " << smaller << endl;
   
    //Exit program!
    return 0;
}