/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 9:19 PM
 * Purpose:  This program calculates the current deposit amount of money to have $10,000 
 *           in savings account after 10 years 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float present(float, float, int);

float   F, // future amount of money in savings account, in this case $10,000 
        P, // present amount of money in savings account
        i; // annual interest rate
int     y; // number of years, in this case 10 years 

int main(int argc, char** argv) {
//Process/Map inputs to outputs

    cout << "Please enter the account's future value: $";
    cin >> F;
    cout << "Please enter monthly interest rate: ";
    cin >> i;
    cout << "Please enter number of years: ";
    cin >> y;
    P = present(F, i, y);
    cout << fixed << showpoint << setprecision(2);
    cout << "You need to deposit a value of $" << P << " to have $10,000 after 10 years" << endl;
    return 0;
}
float present (float future, float intrst, int year){
float result = 0;
    result = (future) / (pow ((1.0 + intrst),year));
    return result;
}    
//Exit stage right!