/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 9:33 PM
 * Purpose:  This program tells your sedentary lifestyle based on your BMI
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
    double weight, height, bmi;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
               
    //Display Outputs
    cout << "Enter your weight in pounds" << endl;
    cin >> weight;
    cout << "Enter your height in inches" << endl;
    cin >> height;
    bmi = (weight * 703) / (pow( height, 2));
    if (bmi < 18.5)
        cout << "You are underweight" << endl;
    else if (bmi >= 18.5 && bmi <= 25)
        cout << "You are optimal " << endl;
    else if (bmi > 25)
        cout << "You are overweight" << endl;
    
    //Exit program!
    return 0;
}