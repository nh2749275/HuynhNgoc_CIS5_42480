/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 5:16 PM
 * Purpose:  This program calculates the kinetic energy of an object
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float kineticEnergy(float, float);
      
//Execution Begins Here
float m, // mass of object entered by user in kilograms
      v, // velocity of object entered by user in meter/second
      KE; // kinetic energy = 1/2mv^2
    
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    cout << "Please enter positive mass in kilogram and positive velocity in m/s" << endl;
    cin >> m >> v;
    
    while (m < 0 || v < 0){
    cout << "Please enter positive mass in kilogram and positive velocity in m/s" << endl;
    cin >> m >> v;
    }
    KE = kineticEnergy(m, v);
    cout << "The object's kinetic energy is: " << KE << " kg*m/s-squared" << endl;
    
    return 0;
}
    //Output data


float kineticEnergy(float mass, float vel){

    float KEnergy = 0.0f;
    KEnergy = (0.5) * mass * (pow (vel,2));
    return KEnergy;
}
//Exit stage right!