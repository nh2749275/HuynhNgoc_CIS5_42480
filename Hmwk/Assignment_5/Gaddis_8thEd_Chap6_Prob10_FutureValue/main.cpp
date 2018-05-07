/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 7:35 PM
 * Purpose:  This program calculates future amount of money in savings account
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float future(float, float, int);

float   F, // future amount of money in savings account 
        P, // present amount of money in savings account
        i; // monthly interest rate
int     t; // number of months 

int main(int argc, char** argv) {
//Process/Map inputs to outputs

    cout << "Please enter the account's present value: $";
    cin >> P;
    cout << "Please enter monthly interest rate: ";
    cin >> i;
    cout << "Please enter number of months:";
    cin >> t;
    F = future(P, i, t);
    cout << "Your future value after " << t << " months is $" << F << endl;
    return 0;
}
float future (float present, float intrst, int month){
float result = 0;
    result = (present) * (pow ((1.0 + intrst),month));
    return result;
}    
//Exit stage right!