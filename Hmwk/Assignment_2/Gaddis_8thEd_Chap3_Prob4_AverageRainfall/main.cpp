/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Average Rainfall
 * Created on March 11, 2018, 11:48 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    double  rain1,
            rain2,
            rain3,
            average;
    string name1, name2, name3;
//Initialize the user values
    cout << "This program calculates average rainfall in 3 months"<<endl;
    cout << "What is the name of the first month?"<<endl;
    cin >> name1;
    cout << "How many inches of rain in "<<name1<<"?"<<endl;
    cin >> rain1;
    cout << "What is the name of the second month?"<<endl;
    cin >> name2;
    cout << "How many inches of rain in "<<name2<<"?"<<endl;
    cin >> rain2;
    cout << "What is the name of the third month?"<<endl;
    cin >> name3;
    cout << "How many inches of rain in "<<name3<<"?"<<endl;
    cin >> rain3;
//Map/Process inputs to outputs
    average = (rain1+rain2+rain3)/3.0;
//Display Outputs
    cout << "The average rainfall for "<<name1<<", "<<name2<<", and "<<name3<<"  is "<<average<<" inches."<<endl;
    return 0;
}

