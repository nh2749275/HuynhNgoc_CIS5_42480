/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Box Office
 * Created on March 12, 2018, 12:40 AM
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
    float adult, child, gross, net, dstrbtr;
    string name;
    
    //Initialize the user values
    cout<<"This program calculates a theater's gross and net box office profit for a night"<<endl;
    cout<<"Name of movie:"<<endl;
    cin>> name;
    cout<<"Number of adult tickets sold:"<<endl;
    cin>>adult;
    cout<<"Number of child tickets sold:"<<endl;
    cin>>child;
    
    //Map/Process Inputs to Outputs
    gross = adult * 10.00 + child * 6.00;
    net = gross * 0.20;
    dstrbtr = gross * 0.80;
    
    //Display Outputs
    cout<<left<<setw(30)<<"Movie Name:"<<'"'<<name<<'"'<<endl;
    cout<<setw(30)<<"Adult Tickets Sold:"<<adult<<endl;
    cout<<setw(30)<<"Child Tickets Sold:"<<adult<<endl;
    cout<<setw(30)<<fixed<<setprecision(2)<<"Gross Box Office Profit:"<<"$"<<gross<<endl;
    cout<<setw(30)<<"Net Box Office Profit:"<<"$"<<net<<endl;
    cout<<setw(30)<<"Amount Paid to Distributor:"<<"$"<<dstrbtr<<endl;
   
    return 0;
}

