/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Ocean's Levels
 * Created on March 1, 2018, 2:04 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float   change, //in mm/year
            year1,year2,year3,
            lvlin1,lvlin2,lvlin3;
    
//Initial Variables
    change = 1.5f;
    year1 = 5.0f;
    year2 = 7.0f;
    year3 = 10.0f;
    
//Map Process Inputs to Outputs    
    lvlin1 = change*year1;
    lvlin2 = change*year2;
    lvlin3 = change*year3;
    
//Display Outputs
    cout << "Level change in 5 years = " << lvlin1 << " mm " << endl;
    cout << "Level change in 7 years = " << lvlin2 << " mm " << endl;
    cout << "Level change in 10 years = " << lvlin3 << " mm" << endl;
    return 0;
}

