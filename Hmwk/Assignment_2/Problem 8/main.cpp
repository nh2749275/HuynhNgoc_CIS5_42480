/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: How Many Widgets
 * Created on March 12, 2018, 1:16 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    double pllwt, totalwt;
    int    widnmbr;
    
    //Initialize the user values
    cout<<"This program calculates number of widgets stacked on a pallet"<<endl;
    cout<<"Weight of pallet itself:"<<endl;
    cin>> pllwt;
    cout<<"Weight of pallet with the widgets on it:"<<endl;
    cin>>totalwt;
    
    //Map/Process Inputs to Outputs
    widnmbr = (totalwt-pllwt)/12.5;
    
    //Display Outputs
    cout<<"Number of widgets on pallet:"<<widnmbr<<endl;
 
    return 0;
}

