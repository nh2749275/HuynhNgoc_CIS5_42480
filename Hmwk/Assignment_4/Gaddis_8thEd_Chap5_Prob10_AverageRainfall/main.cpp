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
    float rnfll, //user inputs rainfall for each month, in inches
          total, //total rainfall for the entire period, in inches
          avg; // average rainfall for each month, in inches
    int   months, // total of months rained 
          years; // number of years of rainfall
     
    //Initialize Variables
    rnfll = 0;
    total = 0;
    avg = 0;
    months = 0;
    years = 0;
    
    //Process/Map inputs to outputs
     
    //Output data
    cout << "How many years has it rained?" << endl; 
    cin >> years;
      
    while (years < 1)
    {
        cout << "Number of year must be >1." << endl;
        cin >> years;
    }
    while (rnfll < 0)
    {
        cout << "Rainfall must be positive " << endl;
        cin >> rnfll;
    } 
    total = 0; //initialize accumulator
    for (int year = 1; year <= years; year ++)
    {   
        cout << "Year " << year << endl;
                
        for (int month = 1; month <= 12; month ++)
        {
            cout << "Enter rainfall amount in inches for month " << month << ":\t";
            cin >> rnfll;    
            total += rnfll;
        }
    }   
    avg = total/(12*years);
    months = 12 * years; 
    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "The number of months rained is " << months << endl;
    cout << "The total rainfall is " << total << endl;
    cout << "Average rainfall for each month is " << avg << endl;
 
    //Exit stage right!
    return 0;
}