/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 30th, 2018, 3:13 PM
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
    float salary, //salary of each day in dollars
          total; //total salary in dollars
    int   days, // number of days worked
          pennies; // number of pennies paid each day
     
    //Initialize Variables        
    
    //Process/Map inputs to outputs
     
    //Output data
    cout << "How many days do you work?" << endl; 
    cin >> days;
      
    cout << "Days" << "\t" << "Salary of each day " << endl;
    cout << "------------------------------" << endl;
     
    while (days < 1)
    {
        cout << "Number of days must be integer and greater than 0 " << endl;
        cin >> days;
    }
    salary = 0.01;
    total = 0;
    
    for (int count = 1; count <= days; count ++)
    {        
        cout << fixed << showpoint << setprecision(2) << endl;
        cout << count << "\t\t $" << salary << endl;
        total += salary;
        salary *= 2;        
    }   
    cout << "-------------------------" << endl;
    cout << "Total" << "\t\t $" << total << endl;
     
    //Exit stage right!
    return 0;
}