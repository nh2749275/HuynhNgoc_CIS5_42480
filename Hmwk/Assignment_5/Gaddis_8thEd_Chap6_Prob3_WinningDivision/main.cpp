/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 1:37 AM
 * Purpose:  This program determines the company's division that has the greatest sale.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float getSales(string);
void findHighest (float, float, float, float);
      
//Execution Begins Here
float NE, SE, NW, SW, // sales of 4 divisions, Northeast, Southeast, Northwest, Southwest
      maxSale; // greatest sale
        
int main(int argc, char** argv) {
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    cout << "Please enter positive sales for NE : $";
    cin >> NE;
    cout << "Please enter positive sales for SE : $";
    cin >> SE;
    cout << "Please enter positive sales for NW : $";
    cin >> NW;
    cout << "Please enter positive sales for SW : $";
    cin >> SW;
    
    findHighest (NE, SE, NW, SW);
}

float getSales(string name){
        float sales = 0;
        cout << "Please enter sale for division " << name;
        cin >> name;
        return sales;
}

void findHighest (float NE,float SE, float NW, float SW ){
    string divsion = "";
    
        if (NE >= SE && NE >=NW and SE >=SW){
            maxSale = NE;
            divsion = "Northeast";
        }
        else if (SE >= NE && SE >= NW && NE >=SW) {
            maxSale = SE;
            divsion = "Southeast";    
        }
        else if (NW >= NE && NW >= SE && NE >=SW) {
            maxSale = NW;
            divsion = "Northwest";    
        }
        else {
            maxSale = SW;
            divsion = "Southwest";    
            }
        cout << "The division with greatest sale is " << divsion << " with a sale of $" << maxSale << endl;
}

//Exit stage right!