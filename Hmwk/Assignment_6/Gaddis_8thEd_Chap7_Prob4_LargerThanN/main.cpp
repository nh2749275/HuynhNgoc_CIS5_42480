/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 25, 2018, 12:39 AM
 * Purpose:  This program displays the values in an array larger than a specified number.
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void display(int[], int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    
    int size = 100, //defines a large array to fill unknown number of items
        number[size], // holds array values
        n, // this is number n
        count = 0;
       
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    int num;
    
    cout << "Enter an integer or 0.5 to quit" << endl;
    cin >> num;
    while (num != 0.5 && count < size){
        count++;
        cout << "Enter an integer or 0.5 to quit" << endl;
        cin >> num;
    }
    for (int index = 0; index < count; index++)
        cout << number[index] << endl;
    
    if (num == 0.5){    
        cout << "Enter the specified number so I can display every number greater than it" << endl;
        cin >> n;
    }
    while (number[size] > n)
        while(num != 0.5){
            num++;
            cout << num << endl;
        }
        
    
}

 
    //Exit stage right!