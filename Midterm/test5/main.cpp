/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on 04/26/2018 8:00pm
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float   pychck1, 
            pychck2, 
            pychck3;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    //Calculate Paycheck
    pychck1 = payRate * hrsWrkd;
    pychck2 = pychck1 + payRate * (hrsWrkd - 20) * 0.5;
    pychck3 = pychck2 + payRate * (hrsWrkd - 40) * 0.5;
    cout << fixed << setprecision(2);
    if (hrsWrkd <= 20)
        cout << "$" << pychck1 << endl;
    else if (hrsWrkd > 20 && hrsWrkd < 40)
        cout << "$" << pychck2 << endl;
    else
        cout << "$" << pychck3 << endl;
    
    //Output the check
    
    
    //Exit
    return 0;
}