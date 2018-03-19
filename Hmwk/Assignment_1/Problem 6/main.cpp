/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Annual Pay
 * Created on February 28, 2018, 4:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
//Declare Variables
int main(int argc, char** argv) {
    float   payAmt, //amount pay for each period in $
            payPerd, //times of payments is 26 times
            annlPay; //total annual pay

//Initial Variables
    payAmt = 2200.f; // in $
    payPerd = 26.0f; //times
            
//Map Process Inputs to Outputs
    annlPay=payAmt*payPerd; //in $

//Display Outputs
    cout << "Total Annual Pay = $" << annlPay << endl;

            return 0;
}

