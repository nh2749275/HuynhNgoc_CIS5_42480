/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 27, 2018, 1:11 PM
 * Purpose:  This program displays the summary of rainfall for the year
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
    
    int     size = 12; 
    float   rain[12], //store amount of rainfall for each month
            total, average, 
            small, large; // the smallest and largest amounts of ranifall
    string  smllMth, // the month that has smallest rainfall
            lrgeMth; // the month that has largest rainfall
    
    //Initialize Variables
    total = 0;
    
    //Process/Map inputs to outputs
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //Output data
    cout << "Enter rainfall amount for each month" << endl;       
    for (int count = 0; count < 12; count++){
        cout << month[count] << ": ";
        cin >> rain[count];
        while (rain[count] < 0){
            cout << "Rainfall cannot be negative. Please enter 0 or a positive integer." << endl;
            for (int count = 0; count < 12; count++){
                cout << month[count] << ": ";
                cin >> rain[count];
            }
        }
        total += rain[count];
    }
    average = total/12;
    
    for (int x = 0; x < 12; x++){
        if (rain[x] < small){
            small = rain[x];
            smllMth = month[x];
        }
        if (rain[x] > large){
            large = rain[x];
            lrgeMth = month[x];
        }
    }
    cout << fixed << showpoint << setprecision (2) << endl;
    cout << "Total rain for the past year is: " << total << endl;
    cout << "Average rainfall for the past year is: " << average << endl;
    cout << "The month with smallest rainfall is: " << smllMth << endl;
    cout << "The month with largest rainfall is: " << lrgeMth << endl;
    return 0;
}
    
    //Exit stage right!