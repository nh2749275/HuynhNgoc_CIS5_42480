/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 9:55 PM
 * Purpose:  This program tells if an object is heavy or light
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
    double mass, weight;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    cout << "Enter the mass of the object" << endl;
    cin >> mass;
    
    weight = mass * 9.8;
    
    if (weight > 1000)
        cout << "The object is heavy" << endl;
    else if (weight > 10 && weight < 1000)
        cout << "The object is not heavy or too light" << endl;
    else
        cout << "The object is too light" << endl;
    
    //Exit program!
    return 0;
}