/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on March 30th, 2018, 11:17 AM
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
    float speed, //speed of the vehicle in mph
          dstnce; //distance the vehicle travel in miles
    int   hour; // hours the vehicle traveled in hour
     
    //Initialize Variables        
    
    //Process/Map inputs to outputs
    
    //Output data
      cout << "What is the speed of the vehicle in mph?" << endl; 
      cin >> speed;
      cout << "How many hours has it traveled?" << endl;
      cin >> hour;
      
      cout << "Hour" << "\t" << "Distance traveled(mile)" << endl;
      cout << "------------------------------" << endl;
     
     while (hour < 1)
     {
         cout << "Time must be integer and greater than 0 " << endl;
         cin >> hour;
     }
     for (int count = 1; count <= hour; count ++)
     {
         cout << fixed << showpoint << setprecision(1) << endl;
         cout << count << "\t\t" << (count * speed) << endl;
     }
       
    //Exit stage right!
    return 0;
}