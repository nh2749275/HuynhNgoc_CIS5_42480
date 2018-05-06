/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 5, 2018, 11:55 PM
 * Purpose:  This program displays the item's retail price.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float calculateRetail(float, float);
      
//Execution Begins Here
float whSale, // wholesale cost entered by user
      pcntage, // markup percentage
      retail; // retail of the item 
    
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    cout << fixed << showpoint << setprecision (2);
    //Process/Map inputs to outputs
    
    cout << "Please enter positive wholesale cost and positive percentage" << endl;
    cin >> whSale >> pcntage;
    
    while (whSale < 0 || pcntage < 0){
    cout << "Please enter positive wholesale cost and positive percentage" << endl;
    cin >> whSale >> pcntage;
    }
    
    retail = calculateRetail(whSale, pcntage);
    cout << "The item's retail price is: $" << retail << endl;
    
    return 0;
}
    //Output data
   
    float calculateRetail(float sale, float pcntge){
        float total = 0;
        total = sale + sale * pcntge/100;
        return total;
    }
    //Exit stage right!