/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 10:30 PM
 * Purpose:  This program calculates the size of a population for a year.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int ppltion(int, float, float, int);

float   DP, // death rate 
        BP; // birth rate
int     P, // previous population size
        N, // number of years, in this case 10 years 
        y; // number of years
int main(int argc, char** argv) {
//Process/Map inputs to outputs

    cout << "Please enter the previous population size:";
    cin >> P;
    cout << "Please enter birth rate in %: ";
    cin >> BP;
    cout << "Please enter death rate in %: " ;
    cin >> DP;
    cout << "Please enter number of year: ";
    cin >> y;
    
    while (P < 2 || BP < 0 || DP < 0 || y < 1){
        cout << "Population must be greater or equal to 2 " << endl;
        cout << "Birth rate and death rate must be positive " << endl;
        cout << "Number of years must be greater or equal to 1 year" << endl;
    cout << "Please enter the previous population size:";
    cin >> P;
    cout << "Please enter birth rate in %: ";
    cin >> BP;
    cout << "Please enter death rate in %: " ;
    cin >> DP;
    cout << "Please enter number of year: ";
    cin >> y;
    }
        
    
    
    N = ppltion(P, BP, DP, y);
    
    cout << "The size of new population after " << y << " years is: " << N << endl;
    return 0;
}
int ppltion(int prvious, float drate, float brthrte, int year){
int result = 0;
    result = prvious + (prvious * brthrte/100) - (prvious * drate/100);
    return result;
}    
//Exit stage right!