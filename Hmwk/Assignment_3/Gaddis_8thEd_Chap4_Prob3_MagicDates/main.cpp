/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 5:35 PM
 * Purpose:  This program tells whether a date is a Magic Date
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
    float date, // any date of the month
          month,// 2-digit month 
          year, // 2-digit year
          magcDte; //magic date if date*month is year entered
    //Initial Variables
    date = 6;
    month = 10;
    year = 60;
    //Map/Process Inputs to Outputs
    
            
    //Display Outputs
    cout << "Enter the date" << endl;
    cin >> date;
    cout << "Enter the month in number form" << endl;
    cin >> month;
    cout << "Enter 2-digit of the year" << endl;
    cin >> year;
    magcDte = date * month;
    
    if (magcDte == year)
        cout << "It's a Magic Date" << endl;
    else
        cout << "It's not a Magic Date" << endl;
    
    //Exit program!
    return 0;
}