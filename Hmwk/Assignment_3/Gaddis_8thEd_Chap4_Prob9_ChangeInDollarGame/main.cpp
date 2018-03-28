/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 11:31 PM
 * Purpose:  This program determines if you have one dollar from your coins
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int pennies, //number of pennies having value of $0.01 
        nickels, // number of nickels having value of $0.05
        dimes, //number of dimes having value of $0.10
        qrtrs; //number of quarters having value of $0.25
    float total; // total money in dollars
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    cout << "Enter number of pennies" << endl;
    cin >> pennies;
    cout << "Enter number of nickels" << endl;
    cin >> nickels;
    cout << "Enter number of dimes" << endl;
    cin >> dimes;
    cout << "Enter number of quarters" <<endl;
    cin >> qrtrs;
    
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (qrtrs * 0.25);
    cout << "You have $" << total << endl;
    
    if (total == 1)
        cout << " Congratulations! You win the game" << endl;
    else if (total < 1)
        cout << " Sorry. You have less than $1 " << endl;
    else 
        cout << " Sorry. You have more than $1 " << endl;
    //Exit program!
    return 0;
}