/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 9:05 PM
 * Purpose:  This program compares areas of 2 rectangles
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
    float length1, width1, length2, width2, area1, area2,larger;
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
   
    
    //Display Outputs
    cout << "Enter lengths of the 2 rectangles " << endl;
    cin >> length1 >> length2;
    cout << "Enter widths of the 2 rectangles " << endl;
    cin >> width1 >> width2;
    area1 = length1 * width1;
    area2 = length2 * width2;
    if (area1 == area2)
        cout << "The 2 areas are the same" << endl;
    else
        {larger = (area1 > area2)? area1:area2;
        cout << "The larger area is " << larger << endl;
    }   
    //Exit program!
    return 0;
}