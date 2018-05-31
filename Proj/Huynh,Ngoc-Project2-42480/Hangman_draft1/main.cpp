/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 30, 2018, 10:20 PM
 * Purpose: Hangman Game
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand and srand
#include <ctime> //time
#include <algorithm> //sort
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries
//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
//Function Prototypes
//Execution Begins Here



int main(int argc, char** argv) {
    string word, //random word
           letters; //number of letters of the word0
    int choice;
        
    unsigned seed = time (0);
    srand (seed); 
        
    cout << "1. Press 1 to start game" << endl;
    cout << "0. Press 0 to quit game" << endl;
    cin >> choice;
    while (choice != 0){
        word = (rand() % 8) + 1;
        cout << "Please guess the letters" << endl;
        cin >> letters;
    }
    //Exit stage right!
    return 0;
}

