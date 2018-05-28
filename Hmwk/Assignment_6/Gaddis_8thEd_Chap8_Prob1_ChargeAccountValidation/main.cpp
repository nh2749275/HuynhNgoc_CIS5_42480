/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 24, 2018, 8:39 PM
 * Purpose:  This program displays the largest and smallest values stored in an array.
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int srchLst (int, int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int size = 18,
        index = 0,
        number,
        postion = -1,
        result;
    bool found = false;
    
    int account[18] = {"5658845", "4520125", "7895122", "8777541", "8451277", "1302850", "8080152", 
                        "4562555", "5552012", "5050552", "7825877", "1250255", "1005231", "6545231",
                        "3852085", "7576651", "7881200", "4581002"};
        
    //Process/Map inputs to outputs
    cout << "Enter the account number you want to validate" << endl;
    cin >> number;
    result = srchLst (account[18], postion, number);
    
return 0;
}
int srchLst (int list[], int element, int value){
    int index = 0;
    bool found = false;
    
    while (index < element && !found){
        if (list[index] == value){ // If the value is found
            found = true; // Set the flag
            element = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    
    return element;
}
    
    //Exit stage right!