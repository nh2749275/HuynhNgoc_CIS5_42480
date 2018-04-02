/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 30th, 2018, 7:17 AM
 * Purpose:  This program shows the distance traveled in a period of time
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    
    for (int i = 0; i<= 7; i++) {
        for (int ii = 0 + 16 * i; ii <= 15 + 16 * i ; ii++) {
            cout << (char) ii;
        }
        cout << endl;
    }
       
    //Exit stage right!
    return 0;
}