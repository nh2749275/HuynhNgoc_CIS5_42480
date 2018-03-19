/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Sum of Two Numbers
 * Created on February 24, 2018, 1:19 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables 
    float   a,
            b, //a is 50, b is 100
            total;
    
//Initial Variables
    a = 50.0f;
    b = 100.0f;

//Map Process Inputs to Outputs
    total = a+b;

//Display Outputs
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Total = " << total << endl;
    return 0;
}

