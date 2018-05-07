/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 6, 2018, 11:30 PM
 * Purpose:  This program runs solution of 9 different problems.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int problem; //problem choice chose by user
    
    while (true) 
    {
        cout << "Choose the problem from the list below" << endl;
        cout << "1.  Problem 1: Mark Up" << endl;
        cout << "3.  Problem 3: Winning Division" << endl;
        cout << "5.  Problem 5: Falling Distance" << endl;
        cout << "6.  Problem 6: Kinetic Energy" << endl;
        cout << "7.  Problem 7: Celsius Temperature Table" << endl;
        cout << "8.  Problem 8: Coin Toss" << endl;
        cout << "9.  Problem 9: Present Value" << endl;
        cout << "10. Problem 10: Future Value" << endl;
        cout << "16. Problem 16: Population" << endl;
        cout << "0.  Quit" << endl;
        cin >> problem;
        
        switch (problem)
        {
            case 1: 
                cout << "You chose Problem 1" << endl;
                    
                //Function Prototypes
                float Retail(float, float);
      
                //Execution Begins Here
                float whSale, // wholesale cost entered by user
                pcntage, // markup percentage
                retail; // retail of the item 

                int main(int argc, char** argv) {
                //Declare Variables

                //Initialize Variables
                cout << fixed << showpoint << setprecision (2);
                //Process/Map inputs to outputs

                cout << "Please enter positive wholesale cost and positive percentage" << endl;
                cin >> whSale >> pcntage;

                while (whSale < 0 || pcntage < 0){
                    cout << "Please enter positive wholesale cost and positive percentage" << endl;
                    cin >> whSale >> pcntage;
                    }

                    retail = Retail(whSale, pcntage);
                    cout << "The item's retail price is: $" << retail << endl;
    
                return 0;
                }
                //Output data

                float Retail(float sale, float pcntge){
                    float total = 0.0f;
                    total = sale + sale * pcntge/100;
                    return total;
                }
                //Exit stage right!
                break;
            case 3:
                cout << "You chose Problem 3" << endl;
                    //Function Prototypes
                    float getSale(string);
                    void highest (float, float, float, float);

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

                        highest (NE, SE, NW, SW);
                    }

                    float getSale(string name){
                            float sales = 0.0f;
                            cout << "Please enter sale for division " << name;
                            cin >> name;
                            return sales;
                    }

                    void highest (float NE,float SE, float NW, float SW ){
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
                break;
            case 5: 
                cout << "You chose Problem 5" << endl;
                float Dstnce(int);

                //Execution Begins Here
                int  t; // time the object falls, in seconds
                float d; // distance the object falls at a certain time, in meter

                int main(int argc, char** argv) {
                //Process/Map inputs to outputs

                    cout << "The distance the object has fallen in 10 seconds is: " << endl;
                    for (int i = 1; i <= 10; i++){
                        d = Dstnce (i);
                        cout << i << " seconds: " << d << " m" << endl;
                    }
                    return 0;
                }

                float Dstnce (int t){ 
                    float d = 0.0f;
                    d = (0.5) * (9.8) * (pow (t,2));
                    return d;
                }

                break;
            case 6: 
                cout << "You chose Problem 6" << endl;
                float KEnergy(float, float);
      
                //Execution Begins Here
                float m, // mass of object entered by user in kilograms
                      v, // velocity of object entered by user in meter/second
                      KE; // kinetic energy = 1/2mv^2

                int main(int argc, char** argv) {
                    //Declare Variables

                    //Initialize Variables

                    //Process/Map inputs to outputs

                    cout << "Please enter positive mass in kilogram and positive velocity in m/s" << endl;
                    cin >> m >> v;

                    while (m < 0 || v < 0){
                    cout << "Please enter positive mass in kilogram and positive velocity in m/s" << endl;
                    cin >> m >> v;
                    }
                    KE = KEnergy(m, v);
                    cout << "The object's kinetic energy is: " << KE << " kg*m/s-squared" << endl;

                    return 0;
                }
                    //Output data


                float KEnergy(float mass, float vel){

                    float KEnergy = 0.0f;
                    KEnergy = (0.5) * mass * (pow (vel,2));
                    return KEnergy;
                }
                break;
            case 7: 
                cout << "You chose Problem 7" << endl;
                float celsius(float);

                //Execution Begins Here
                float   F, // degrees in Fahrenheit
                        C; // degrees in Celsius

                int main(int argc, char** argv) {
                //Process/Map inputs to outputs

                    cout << fixed << setprecision (2);
                    cout << "This list displays degrees in Fahrenheit from 0 to 20 and Celsius" << endl;
                    cout << setw(10) << "Fahrenheit" << "\t\t" << "Celsius" << endl;
                        for (int i = 0; i <= 20; i++){
                        C = celsius(i);
                        cout << setw(5) << i << "\t\t\t" << C << endl;
                    }
                    return 0;
                }

                float celsius (float Fah){ 
                    float Cel = 0.0f;
                    Cel = (5.0/9.0) * (Fah - 32);
                    return Cel;
                }
                break;
            case 8: 
                int cnToss(void){

                //Execution Begins Here
                int x, // number of time of tossing of the coin 
                    rndnum; // random number generated by the program

                    rndnum = rand() % 2 + 1; //[1,2]
                    return rndnum;
                }
                int main(int argc, char** argv) {
                //Process/Map inputs to outputs
                int x = 0, // number of time of tossing of the coin 
                    rndnum = 0; // random number generated by the program  

                    cout << "How many number do you want to toss the coin?" << endl;
                    cin >> x;

                    for (int i = 1 ; i <= x; i++){
                        rndnum = cnToss();
                        if (rndnum == 1)
                            cout << "head" << endl;
                        if (rndnum == 2)
                            cout << "tail" << endl;
                    }
                }
                break;
            case 9: 
                cout << "You chose Problem 9" << endl;
                float present(float, float, int);

                float   F, // future amount of money in savings account, in this case $10,000 
                        P, // present amount of money in savings account
                        i; // annual interest rate
                int     y; // number of years, in this case 10 years 

                int main(int argc, char** argv) {
                //Process/Map inputs to outputs

                    cout << "Please enter the account's future value: $";
                    cin >> F;
                    cout << "Please enter monthly interest rate: ";
                    cin >> i;
                    cout << "Please enter number of years: ";
                    cin >> y;
                    P = present(F, i, y);
                    cout << fixed << showpoint << setprecision(2);
                    cout << "You need to deposit a value of $" << P << " to have $10,000 after 10 years" << endl;
                    return 0;
                }
                float present (float future, float intrst, int year){
                float result = 0;
                    result = (future) / (pow ((1.0 + intrst),year));
                    return result;
                }    
                break;
            case 10:
                cout << "You chose Problem 10" << endl;
                float future(float, float, int);

                float   F, // future amount of money in savings account 
                        P, // present amount of money in savings account
                        i; // monthly interest rate
                int     t; // number of months 

                int main(int argc, char** argv) {
                //Process/Map inputs to outputs

                    cout << "Please enter the account's present value: $";
                    cin >> P;
                    cout << "Please enter monthly interest rate: ";
                    cin >> i;
                    cout << "Please enter number of months:";
                    cin >> t;
                    F = future(P, i, t);
                    cout << "Your future value after " << t << " months is $" << F << endl;
                    return 0;
                }
                float future (float present, float intrst, int month){
                float result = 0;
                    result = (present) * (pow ((1.0 + intrst),month));
                    return result;
                }    
                break;
            case 16:
                cout << "You chose Problem 16" << endl;
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
            default:
                cout << "Error. Please choose number form listed." << endl;
        }
    }
    //Exit stage right!
    return 0;
}