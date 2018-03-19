/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Male and Female Percentages
 * Created on March 12, 2018, 12:00 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    double fmale, male, fpercnt, mpercnt;
    
    //Initialize the user values
    cout<<"This program calculates percentage of males and females registered in a class"<<endl;
    cout << "How many female registered in the class?" << endl;
    cin >> fmale;
    cout << "How many male registered in the class?" << endl;
    cin >> male;
    
    //Map/Process inputs to outputs
    fpercnt = fmale/(fmale+male)*100;
    mpercnt = male/(fmale+male)*100;
   
    //Display Outputs
    cout << "Female percentage registered = " << fpercnt<<" % " << endl;
    cout << "Male percentage registered = " << mpercnt<<" % " << endl;
    return 0;
}

