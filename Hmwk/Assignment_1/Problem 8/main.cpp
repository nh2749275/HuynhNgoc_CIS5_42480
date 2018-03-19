/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Total Purchase
 * Created on March 1, 2018, 2:34 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float  item1, //price of item 1 in $
           item2, //price of item 2 in $
           item3, //price of item 3 in $
           item4, //price of item 4 in $
           item5, //price of item 5 in $
           sbtotal, //subtotal in $
           taxrate, //tax is 7%
           saletax, //amount of sales tax in $
           total; //total including sales tax in $l
    
//Initial Variables
    item1 = 15.95f;
    item2 = 24.95f;
    item3 = 6.95f;
    item4 = 12.95f;
    item5 = 3.95f;
    taxrate = 0.07f;
   
//Map Process Inputs to Outputs
    sbtotal = item1 + item2 + item3 + item4 + item5;
    saletax = sbtotal * taxrate;
    total = sbtotal+saletax;

//Display Outputs
    cout << "Price of item 1 = $" << item1 << endl;
    cout << "Price of item 2 = $" << item2 << endl;
    cout << "Price of item 3 = $" << item3 << endl;
    cout << "Price of item 4 = $" << item4 << endl;
    cout << "Price of item 5 = $" << item5 << endl;
    cout << "Subtotal = $" << sbtotal << endl;
    cout << "Amount of Sales Tax = $" << saletax << endl;
    cout << "Total = $" << total << endl;
    return 0;
}

