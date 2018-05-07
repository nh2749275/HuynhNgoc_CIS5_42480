/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 5:42 PM
 * Purpose:  This program displays a table of temperature in the first 20 degrees 
             in Fahrenheit and their Celsius equivalents
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float celsius(float);

//Execution Begins Here
float   F, // degrees in Fahrenheit
        C; // degrees in Celsius
        
int main(int argc, char** argv) {
//Process/Map inputs to outputs
    
    cout << fixed << setprecision (2);
    cout << "This list displays degrees in Fahrenheit from 0 to 20 and Celsius" << endl;
    cout << setw(10) << "Fahrenheit" << "\t\t" << "Celsius" << endl;
        for (int i = 0; i <= 20; i++){
        C = celsius(i);
        cout << setw(5) << i << "\t\t\t" << C << endl;
    }
    return 0;
}

float celsius (float Fah){ 
    float Cel = 0.0f;
    Cel = (5.0/9.0) * (Fah - 32);
    return Cel;
}
//Exit stage right!