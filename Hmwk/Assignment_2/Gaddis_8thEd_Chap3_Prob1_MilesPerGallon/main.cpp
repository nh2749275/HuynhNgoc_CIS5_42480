/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Miles per Gallon
 * Created on March 11, 2018, 10:20 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float gallons,
          miles,
          mpgal; //miles per gallon
    //Initialize the user values
    cout<<"This program calculates miles per gallon of gas"<<endl;
    cout<<"What is the number of gallons of gas your car can hold?"<<endl;
    cin>>gallons;
    cout<<"What is number of miles your car can run on a full tank?"<<endl;
    cin>>miles;
    cout<<endl;
    //Map/Process Inputs to Outputs
    mpgal=miles / gallons;
    //Display Outputs
    cout<<"Miles per gallon = "<<mpgal<<endl;        
    return 0;
}

