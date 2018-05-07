/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 4:26 PM
 * Purpose:  This program calculates the distance an object falls in 10 seconds
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float Dstnce(int);

//Execution Begins Here
int  t; // time the object falls, in seconds
float d; // distance the object falls at a certain time, in meter
        
int main(int argc, char** argv) {
//Process/Map inputs to outputs
    
    cout << "The distance the object has fallen in 10 seconds is: " << endl;
    for (int i = 1; i <= 10; i++){
        d = Dstnce (i);
        cout << i << " seconds: " << d << " m" << endl;
    }
    return 0;
}

float Dstnce (int t){ 
    float d = 0.0f;
    d = (0.5) * (9.8) * (pow (t,2));
    return d;
}


//Exit stage right!