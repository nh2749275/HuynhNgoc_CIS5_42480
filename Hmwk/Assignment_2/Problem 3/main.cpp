/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Test Average
 * Created on March 11, 2018, 10:58 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    double test1, test2, test3, test4, test5;
    double average;
//Initialize the user values
    cout<<"This program calculates average of 5 test scores"<<endl;
    cout<<"What is the score of test 1?"<<endl;
    cin>>test1;
    cout<<"What is the score of test 2?"<<endl;
    cin>>test2;
    cout<<"What is the score of test 3?"<<endl;
    cin>>test3;
    cout<<"What is the score of test 4?"<<endl;
    cin>>test4;
    cout<<"What is the score of test 5?"<<endl;
    cin>>test5;
//Map/Process inputs to outputs
    average=(test1+test2+test3+test4+test5)/5.0;
//Display Outputs
    cout<<fixed<<setprecision(1)<<"Average of 5 tests = " <<average<<showpoint;
     
    return 0;
}

