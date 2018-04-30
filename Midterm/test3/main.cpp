/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on 4/29/2018 3:30pm
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
      char n1000s,n100s,n10s,n1s;
    unsigned short x;
        
    //Initialize Variables
    
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>x;
    
    //Calculate Number of 1000's, 100's, 10's, 1's
    n1000s = x/1000;
    x -= n1000s * 1000;
    n100s = x/100;
    x -= n100s * 100;
    n10s = x/10;
    x -= n10s * 10;
    n1s = x;
    
    //Output 1000's converted
    switch(n1000s){
        case 3: cout << "Three Thousand "; break;
        case 2: cout << "Two Thousand "; break;
        case 1: cout << "One Thousand "; break;
        default: cout << "";
    }
    
    //Output 100's converted
    switch(n100s){
        case 9: cout << "Nine Hundred "; break;
        case 8: cout << "Eight Hundred "; break;
        case 7: cout << "Seven Hundred "; break;
        case 6: cout << "Six Hundred "; break;
        case 5: cout << "Five Hundred "; break;
        case 4: cout << "Four Hundred "; break;
        case 3: cout << "Three hundred "; break;
        case 2: cout << "Two Hundred "; break;
        case 1: cout << "One Hundred "; break;
        default: cout << "";
    }
    
    //Output 10's converted
    switch(n10s){
        case 9: cout << "Ninety "; break;
        case 8: cout << "Eighty "; break;
        case 7: cout << "Seventy "; break;
        case 6: cout << "Sixty "; break;
        case 5: cout << "Fifty "; break;
        case 4: cout << "Forty "; break;
        case 3: cout << "Thirty "; break;
        case 2: cout << "Twenty "; break;
        case 1: {
            if (n1s == 9)
                cout << "Nineteen";
            if (n1s == 8)
                cout << "Eighteen";
            if (n1s == 7)
                cout << " Seventeen";
            if (n1s == 6)
                cout << "Sixteen";
            if (n1s == 5)
                cout << "Fifteen";
            if (n1s == 4)
                cout << "Fourteen";
            if (n1s == 3)
                cout << "Thirteen";
            if (n1s == 2)
                cout << "Twelve";
            if (n1s == 1)
                cout << "Eleven";
            if (n1s == 0)
                cout << "Ten";
        }
        default: cout << "";
    }
    
    //Output 1's converted
    if (n10s != 1) {
        switch(n1s){
        case 9: cout << "Nine"; break;
        case 8: cout << "Eight"; break;
        case 7: cout << "Seven"; break;
        case 6: cout << "Six"; break;
        case 5: cout << "Five"; break;
        case 4: cout << "Four"; break;
        case 3: cout << "Three"; break;
        case 2: cout << "Two"; break;
        case 1: cout << "One"; break;
        default: cout << "";
    }
    }
    else 
        cout << "";
    
    cout << " and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}