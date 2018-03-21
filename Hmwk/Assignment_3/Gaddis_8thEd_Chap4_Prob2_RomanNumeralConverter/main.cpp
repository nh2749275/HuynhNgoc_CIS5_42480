/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 20th, 2018, 4:02 PM
 * Purpose: This program converts a number to Roman numeral version 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries
//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x;
    //Initial Variables
            
    //Map/Process Inputs to Output
        
    
    //Display Outputs
   cout << "Enter number between 1 to 10 to be converted to Roman numeral" << endl;
   cin >> x;
   switch (x)
    {case 1: cout << "The Roman numeral is I" <<endl;
    break;
    case 2: cout << "The Roman numeral is II" <<endl;
    break;
    case 3: cout << "The Roman numeral is III" <<endl;
    break;
    case 4: cout << "The Roman numeral is IV" <<endl;
    break;
    case 5: cout << "The Roman numeral is V" <<endl;
    break;
    case 6: cout << "The Roman numeral is VI" <<endl;
    break;
    case 7: cout << "The Roman numeral is VII" <<endl;
    break;
    case 8: cout << "The Roman numeral is VIII" <<endl;
    break;
    case 9: cout << "The Roman numeral is IX" <<endl;
    break;
    case 10: cout << "The Roman numeral is X" <<endl;
    break;
    default: cout << "Invalid Input - Number is not in the range of 1 to 10"<<endl; 
   } 
   //Exit program!
    return 0;
}