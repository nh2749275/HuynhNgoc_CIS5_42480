/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: How many calories
 * Created on March 12, 2018, 11:12 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    double  clories;
    int     cookies;
    
    //Initialize the user values
    cout<<"This program calculates total calories contained in number of cookies you eat"<<endl;
    cout << "Number of cookies eaten:" << endl;
    cin >> cookies;
    //Map/Process Inputs to Outputs
    clories = static_cast<double>(cookies) * 300/(30/10);
    //Display Outputs
    cout << "Total calories in " << cookies << " cookies is:" << clories << " calories" << endl;
    
    return 0;
}

