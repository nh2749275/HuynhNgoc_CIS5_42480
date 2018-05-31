/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 27, 2018, 3:04 PM
 * Purpose:  This program reports the amount of food eaten by monkeys at a zoo.
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
void show(int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    
    
    int   sizeM = 3, // 3 monkeys
          sizeD = 9, // 7 days 
          monkey,
          food, // store amount of food eaten by each monkey in lbs.
          table, //2-D array dimension stores data for 3 monkeys and 7
          least, // the least amount of food eaten by a monkey
          great, // the greatest amount of food eaten by a monkey
          total[3]; // total sales of all chip and salsa types
    string  lstMnky, //the monkey that eats least
            grtMnky; // the monkey that eats greatest
        
    //Initialize Variables
        
    //Process/Map inputs to outputs
     
    cout << "Enter the amount of food in lbs for each monkey: " << endl;
    for (int m = 0; m < 3; m++){
        for (int f = 1; f <= 7; f++){
            cout << "Monkey " << m + 1 << ", "; 
            cout << "Day " << (f) << ": ";
            cin >> food[f];
            while (food[f] < 0){
                cout << "Food amount cannot be negative. Please enter 0 or a positive amount." << endl;
                for (int m = 0; m < 3; m++){
                    for (int f = 1; f <= 7; f++){
                        cout << "Enter the food eaten by " << endl;
                        cout << "Monkey " << m + 1 << ", ";
                        cout << "Day " << f << ": ";
                    }
                    cin >> table[monkey][food];
                    total[sizeM] += food[f];
                }
                    cout << endl;
            }
        }
    }
        
    // Highest and lowest sales
    for (int count = 0; count < 3; count++){
        if (total[count] < least){
            least = total[count];
            lstMnky = monkey[count];
        }
        if (total[count] > great){
            great = total[count];
            grtMnky = monkey[count];
        }
    }
    
    //Output
    
  
    return 0;
}
  void show(int table[monkey], int food){
    for (int x=0; x < 3; x++){
        for (int y = 0; y < 8; y++){
        cout << setw(4) << table[x][y];
        cout << endl;
        }
    }  
  }
    //Exit stage right!