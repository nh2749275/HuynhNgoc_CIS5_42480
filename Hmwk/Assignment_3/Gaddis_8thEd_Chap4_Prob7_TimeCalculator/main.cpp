/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 11:00 PM
 * Purpose:  This program converts seconds to minutes or hours
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double seconds;
    int minutes, hours, days;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    cout << "Enter number of seconds" << endl;
    cin >> seconds;
    
    minutes = seconds/60;
    hours = seconds/3600;
    days = seconds / 86400;
    
    if (seconds < 60 && seconds > 0)
        cout << seconds << " seconds" << endl;
    else if (seconds > 60 && seconds < 3600)
        cout << seconds << " seconds = " << minutes << " minutes" << endl;
    else if (seconds > 3600 && seconds < 86400)
        cout << seconds << " seconds = " << hours << " hours " << endl;
    else 
        cout << seconds << " seconds = " << days << " days" <<endl;
    //Exit program!
    return 0;
}