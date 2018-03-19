/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Restaurant Bill
 * Created on February 28, 2018, 3:45 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables    
    float meal,  //charge of meal in $
          taxRate, //tax rate is 6.75%
          tipRate, //tip rate is 20% of total after tax
          taxAmt, //tax amount in $
          tipAmt, //tip amount in $
          total;  //in $

//Initial Variables            
    meal = 88.67f; //in $           
    taxRate = 0.0675f;
    tipRate = 0.20f;

//Map Process Inputs to Outputs
    taxAmt = meal * taxRate;
    tipAmt = 0.20 *(meal+meal * taxRate);        
    total = meal + tipAmt;            

//Display Outputs
    cout << "Meal Cost = $" << meal << endl;
    cout << "Tax Amount = $" << taxAmt << endl;
    cout << "Tip Amount = $" << tipAmt << endl;
    cout << "Total Bill = $" << total << endl;        

    return 0;
}

