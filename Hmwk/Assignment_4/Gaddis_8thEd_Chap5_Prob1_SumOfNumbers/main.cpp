/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 30th, 2018, 9:08 AM
 * Purpose:  This program sums the positive integer numbers from 1 to the number you want.
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
    int num, //user input positive integer number
        sum; // sum of the numbers that user enters     
    //Initialize Variables
    cout << "How many positive integer numbers do you want to sum?" << endl;
    cin >> num;
    //Process/Map inputs to outputs
    while (num < 0)
    {
        cout << "Please enter positive integer only " << endl;
        cin >> num;
    }
    for (int count = 1; count <= num; count ++)
        sum += count;
        cout << "The sum from 1 to " << num << " is " << sum << endl;
    //Output data
    
    //Exit stage right!
    return 0;
}