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
    int pennies, nickles, dimes, qrtrs;
    float total;
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    cout << "Enter number of pennies" << endl;
    cin >> pennies;
    cout << "Enter number of nickles" << endl;
    cin >> nickles;
    cout << "Enter number of dimes" << endl;
    cin >> dimes;
    cout << "Enter number of quarters" <<endl;
    cin >> qrtrs;
    
    total = (pennies * 1) + (nickles * 5) + (dimes * 10) + (qrtrs * 25);
    cout << "You have " << total << endl;
    
    if (total == 100)
        cout << " Congratulations! You win the game" << endl;
    else if (total < 100)
        cout << " Sorry. You have less than 1 dollar" << endl;
    else 
        cout << " Sorry. You have more than 1 dollar" << endl;
    //Exit program!
    return 0;
}