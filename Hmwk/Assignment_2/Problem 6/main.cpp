/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Ingredient Adjuster
 * Created on March 12, 2018, 12:32 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    double cookie, sugar, butter, flour;
    
    //Initialize the user values
    cout<<"This program calculates ingredient needed to make a certain number of cookies"<<endl;
    cout << "How many cookies do you want to make?"<<endl;
    cin >> cookie;
    
    //Map/Process Inputs to Outputs
    sugar = 1.5 * (cookie/48);
    butter = cookie/48;
    flour = 2.75 * (cookie/48);
    
    //Display Outputs
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flour" << endl;
    return 0;
}

