/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 9:28 pM
 * Purpose:  This program calculates the average of tests after the lowest score is dropped.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int Score(string);
void Lowest (string int, int, int, int, int);
float Average (float);

//Execution Begins Here
int test1, test2, test3, test4, test5,// scores of 5 tests before dropping the lowest one.
    lowest, // lowest score
    average; // average calculated after lowest score dropped

int main(int argc, char** argv) {
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    while (test1 < 0 || test1 > 100)
        cout << "Invalid. Please enter a score between 0 and 100:" << endl;
        cout << "Please enter score of test 1: ";
        cin >> test1;
    while (test2 < 0 || test2 > 100)
        cout << "Invalid. Please enter a score between 0 and 100:" << endl;
        cout << "Please enter score of test 2: ";
        cin >> test2;
    while (test3 < 0 || test3 > 100)
        cout << "Invalid. Please enter a score between 0 and 100:" << endl;
        cout << "Please enter score of test 3: ";
        cin >> test3;
    while (test4 < 0 || test4 > 100)
        cout << "Invalid. Please enter a score between 0 and 100:" << endl;
        cout << "Please enter score of test 4: ";
        cin >> test4;
    while (test5 < 0 || test5 > 100)
        cout << "Invalid. Please enter a score between 0 and 100:" << endl;
        cout << "Please enter score of test 5: ";
        cin >> test5;
        
    
    Average (test1, test2, test3, test4, test5);
}

float Score(int number){
        float score = 0.0f;
        cout << "Please enter score for each test " << number;
        cin >> score;
        return score;
}

float Average (int score1, int score2, int score3, int score4, int score5){
    string lowTest = "";
    int lowScre;
    
    lowest = Lowest(test1, test2, test3, test4, test5);
    
}
void Lowest (string &lowTest, int &lowScre, int test1, int test2, int test3, int test4, int test5){
    lowTest = "Test 1";
    lowScre = test1;
    
    if (test2 <= lowTest){
        lowTest = "Test 2";
        lowScre = test2;
    }
    else if (test3 <= lowTest){
        lowTest = "Test 3";
        lowScre = test3;
    }
    else if (test4 <= lowTest){
        lowTest = "Test 4";
        lowScre = test4;
    }
    else (test5 <= lowTest){
        lowTest = "Test 5";
        lowScre = test5;
    }
}
//Exit stage right!