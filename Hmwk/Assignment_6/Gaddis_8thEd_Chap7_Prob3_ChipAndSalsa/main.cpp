/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 25, 2018, 12:17 PM
 * Purpose:  This program reports the sales of each type chip and salsa.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    
    
    int size = 5, 
        jar[size]; // store number of jars sold for each type
    string  name[size]= {"mild", "medium", "sweet", "hot", "zesty"}, //possible salsa types;
            lowNme, //the salsa type that has lowest sale
            highNme; // the salsa type that has highest sale
    
    int total, // total sales of all chip and salsa types
        low, // lowest sales
        high; // highest sale
    
    //Initialize Variables
    
    total = 0;
    //Process/Map inputs to outputs
    
    
    //Output data
    
    cout << "Enter the number of jars sold in the past month for: " << endl;
    for (int x = 0; x < 5; x++){
        cout << name[x] << ": ";
        cin >> jar[x];
        while (jar[x] < 0){
            cout << "Jars sold cannot be negative. Please enter 0 or a positive integer." << endl;
            for (int x = 0; x < 5; x++){
                cout << name[x] << ": ";
                cin >> jar[x];
            }
        }
        // Total Sales
        total += jar[x];
    }
    
    // Highest and lowest sales
    for (int count = 0; count < 5; count++){
        if (jar[count] < low){
            low = jar[count];
            lowNme = name[count];
        }
        if (jar[count] > high){
            high = jar[count];
            highNme = name[count];
        }
    }
    
    //Output
    cout << "This is the report for the past month for each type of chip and salsa:" << endl;
    cout << "Name           Sales" << endl;
    cout << "____________________" << endl;
    for (int type = 0; type < 5; type++)
        cout << name[type] << "\t" << setw(9) << jar[type] << endl;
    
    cout << "Total Sales = " << total << endl;
    cout << "Highest Sales = " << highNme << endl;
    cout << "Lowest Sales = " << lowNme << endl;
    return 0;
}
    
    //Exit stage right!