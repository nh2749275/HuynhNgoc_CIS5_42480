/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Average of Values
 * Created on February 28, 2018, 4:21 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float a,b,c,d,e,sum,average; //a, b, c, d, e are variables of 5 values
//Initial Variables
    a = 28.0f;
    b = 32.0f;
    c = 37.0f;
    d = 24.0f;
    e = 33.0f;
    
//Map Process Inputs to Outputs
    sum=a+b+c+d+e;
    average=sum/5;
            
//Display Outputs
    cout << "Average = " << average << endl;
    
    return 0;
}

