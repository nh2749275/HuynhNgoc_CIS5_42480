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
    char package;
    float hours,chrgA1, chrgA2, chrgA3, chrgB1, chrgB2, chrgB3, chrgC, cheap;
    //Initialize Variables
    cheap = chrgA1 = chrgA2 = chrgA3 = chrgB1 = chrgB2 = chrgB3 = chrgC;
    
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges for package A
    chrgA1 = 16.99f; // constant for the 1st 10 hours
    chrgA2 = 16.99 + 0.95 * (20.00 - 10.00); //$0.95 per hour up to 20hrs
    chrgA3 = chrgA2 + 0.85 * (hours - 20.00); //$0.85 per hour after 20 hours
    
    //Basic Charges for package B
    chrgB1 = 26.99f; // constant for the 1st 20 hours
    chrgB2 = 26.99 + 0.74 * (30.00 - 20.00); //$0.95 per hour up to 30hrs
    chrgB3 = chrgB2 + 0.64 * (hours - 30.00); //$0.85 per hour after 20 hours
    
    //Basic Charges for package C
    chrgC = 36.99f; // constant for every month
   
    //Output the Charge
    switch (package){
        case 'a':{
            cout << fixed << setprecision(2);
            if (hours >= 1 && hours <= 10){
                cout << "$" << chrgA1;
                if (chrgA1 < chrgC && chrgA1 > chrgB1){
                    cout << " B";
                    cout << "$" << chrgA1 - chrgB1 << endl;
                }
                else if (chrgA1 < chrgB1 && chrgA1 > chrgC){
                    cout << "C";
                    cout << "$" << chrgA1 - chrgC << endl;
                }
                else {
                    cout << "A";
                    cout << "$0.00" << endl;
                }
            }
            if (hours > 10 && hours <= 20){
                cout << "$" << chrgA2;
                if (chrgA2 < chrgC && chrgA2 > chrgB1){
                    cout << " B";
                    cout << " $" << chrgA2 - chrgB1 << endl;
                }
                else if (chrgA2 < chrgB1 && chrgA2 > chrgC){
                    cout << " C";
                    cout << " $" << chrgA2 - chrgC << endl;
                }
                else {
                    cout << " A";
                    cout << " $0.00" << endl;
                }
            }
            if (hours > 20){
                cout << "$" << chrgA3;
                if ((chrgA3 >= chrgB2) && (chrgA3 <= chrgC)){
                    cout << " B";
                    cout << " $" << chrgA3 - chrgB2 << endl;
                }
                else if ((chrgA3 >= chrgC)&&(chrgA3 <= chrgB2)){
                    cout << " C";
                    cout << " $" << chrgA3 - chrgC << endl;
                }
                else {
                    cout << " A";
                    cout << " $0.00" << endl;
                }
            }
            break;
        }
    }
        case 'b':{
            cout << fixed << setprecision(2);
            if (hours >= 1 && hours <= 20){
                cout << "$" << chrgB1;
                if (chrgB1 < chrgC && chrgB1 > chrgA2){
                    cout << " A";
                    cout << " $" << chrgB1 - chrgA2 << endl;
                }
                else if (chrgB1 < chrgA1 && chrgB1 > chrgC){
                    cout << "C";
                    cout << " $" << chrgA1 - chrgC << endl;
                }
                else {
                    cout << "A";
                    cout << " $0.00" << endl;
                }
            }
            if (hours > 20 && hours <= 30){
                cout << "$" << chrgB2;
                if (chrgB2 < chrgC && chrgB2 > chrgA2){
                    cout << " A";
                    cout << " $" << chrgB2 - chrgA1 << endl;
                }
                else if (chrgB2 < chrgA2 && chrgB2 > chrgC){
                    cout << " C";
                    cout << " $" << chrgB2 - chrgC << endl;
                }
                else {
                    cout << " B";
                    cout << " $0.00" << endl;
                }
            }
            if (hours > 30){
                cout << "$" << chrgA3;
                if ((chrgB3 >= chrgA3) && (chrgB3 <= chrgC)){
                    cout << " A";
                    cout << " $" << chrgB3 - chrgA3 << endl;
                }
                else if ((chrgB3 >= chrgC)&&(chrgB3 <= chrgA3)){
                    cout << " C";
                    cout << " $" << chrgB3 - chrgC << endl;
                }
                else {
                    cout << " B";
                    cout << " $0.00" << endl;
                }
            }
            break;
        }
    }
        case 'c':{
            cout << fixed << setprecision(2);
            if (hours < 20)
                cout << "$36.99" << endl;
            break;
        }
        default: cout << "Choose package a, b or c and hours" << endl;
        cin >> package >> hours;
    }

    //Output the cheapest package and the savings
    
    //Exit
    return 0;
}