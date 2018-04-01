/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 30th, 2018, 10:48 AM
 * Purpose:  This program shows the levels of ocean will have risen for the next 25 years.
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
    int level, //ocean level in millimeters
        year; // number of year up to 25 years     
    float total; //total = year * 1.5
    
    //Initialize Variables
    level = 1.5; // each year ocean rises 1.5 mm
    year = 1;        
    //Process/Map inputs to outputs
    
    //Output data
      cout << "Year" << "\t" << "Level risen (mm)" << endl; 
     while (year <= 25 && year > 0)
     {
         cout << fixed << showpoint << setprecision(1) << endl;
         cout << year << "\t" << (year *1.5) << endl;
         year ++;
     }
       
    //Exit stage right!
    return 0;
}