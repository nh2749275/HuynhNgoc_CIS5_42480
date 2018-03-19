/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Sales Tax
 * Created on February 28, 2018, 12:41 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
const float Percent=100;
int main(int argc, char** argv) {
//Declare Variables    
    float purchse, //Purchase price is $95
          staTax,  //State Tax is 4%
          counTax, //Country Tax is 2%
          saleTax; //Amount of Sales tax in $

//Initial Variables
    purchse = 95.0f; //in $
    staTax = 0.04f; //State tax is 4%
    counTax = 0.02f; //Country tax is 2%

//Map process Inputs to Output
    saleTax = purchse *(staTax + counTax);
 
//Display Outputs
    cout << "Purchase Price = $" <<purchse << endl;
    cout << "State Tax = " << staTax * Percent << "%" << endl;
    cout << "Country Tax = " << counTax * Percent << "%" << endl;
    cout << "Sales Tax = $" << saleTax << endl;        
        
        
    return 0;

}

