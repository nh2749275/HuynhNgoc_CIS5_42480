/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Purpose: Stadium Seating
 * Created on March 11, 2018, 10:46 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    double  classA,
            classB,
            classC,
            total;
//Initialize the user values
    cout<<"This program calculates total income generated from the tickets"<<endl;
    cout<<"How many tickets sold from Class A?"<<endl;
    cin>>classA;
    cout<<"How many tickets sold from Class A?"<<endl;
    cin>>classB;
    cout<<"How many tickets sold from Class A?"<<endl;
    cin>>classC;
  
//Map/Process inputs to outputs
    total = 15 * classA + 12 * classB + 9 * classC;
//Display Outputs
    cout<<fixed<<setprecision(2)<<"Total income = $" <<total<<showpoint;
    return 0;
}

