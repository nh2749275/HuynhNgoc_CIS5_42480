/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 24, 2018, 8:39 PM
 * Purpose:  This program displays the largest and smallest values stored in an array.
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
    
    float number[10], small, large;
        
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << "Enter 10 values" << endl;       
    for (int count = 1; count <= 10; count++){
        cout << "Value #" << count << ": ";
        cin >> number[count];
    }
    
    small = number[10];
    large = number[10];
    
    for (int count = 1; count <= 10; count++){
        if (number[count] < small)
            small = number[count];
        if (number[count] > large)
            large = number[count];
    }
    cout << "Smallest = " << small << endl;
    cout << "Largest = " << large << endl;
    return 0;
}
    
    //Exit stage right!