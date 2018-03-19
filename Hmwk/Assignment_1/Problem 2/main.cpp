/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Sales Prediction
 * Created on February 28, 2018, 12:17 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float compSle, //company sales in $
          east;    //East Coast sales division in $

//Initial variables
    compSle = 8.6f; //company sales generate $8.6 millions
    east = 0.58f; //East Coast is 58% of total company sales

//Map Process Inputs to Outputs
    east = east * compSle; //East Coast sales in $

//Display Outputs
    cout << "Total Sale = $" << compSle << " million" << endl;
    cout << "East Side Sale = 58% Company Sale" << endl;
    cout << "Sales Prediction = $" << east <<" million" << endl;        
    return 0;
}

