/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Miles per Gallon
 * Created on March 1, 2018, 3:16 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float  cartank, //volume of gas the car holds in gallons
           driven, //distance driven before refuel, in miles
           mpg; //miles per gallons, in mpg

//Initial Variables
    cartank = 15.0f;
    driven = 375.0f;

//Map Process Inputs to Outputs
    mpg = driven/cartank;

//Display Outputs
    cout << "mpg of the car = " << mpg << " mpg " << endl;
    return 0;
}

