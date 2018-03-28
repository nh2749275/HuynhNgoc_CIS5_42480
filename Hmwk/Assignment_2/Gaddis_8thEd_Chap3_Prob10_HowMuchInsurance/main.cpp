/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: How much insurance?
 * Created on March 12, 2018, 8:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    double insrnce, ttlcost;
//Initialize the user of values
    cout<<"This program calculates minimum insurance needs to be purchased"<<endl;
    cout << "Total replacement cost of the structure, building: $";
    cin >> ttlcost;
//Map/Process Inputs to Outputs
    insrnce = ttlcost * 0.80;
//Display Outputs
    cout << "Minimum insurance you should buy: $" << insrnce << endl;
    return 0;
}

