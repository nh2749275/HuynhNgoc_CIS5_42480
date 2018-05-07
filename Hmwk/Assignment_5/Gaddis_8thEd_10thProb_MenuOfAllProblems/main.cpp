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
            case 3: 
                cout << "You chose Problem 3" << endl;
                int level, //ocean level in millimeters
                    year; // number of year up to 25 years     
                float total; //total = year * 1.5

                //Initialize Variables
                level = 1.5; // each year ocean rises 1.5 mm
                year = 1;        
                //Process/Map inputs to outputs

                //Output data
                cout << "Year" << "\t" << "Level risen (mm)" << endl; 
                while (year <= 25 && year > 0)
                {
                    cout << fixed << showpoint << setprecision(1) << endl;
                    cout << year << "\t" << (year *1.5) << endl;
                    year ++;
                }
                break;
            case 4: 
                cout << "You chose Problem 4" << endl;
                for (int i = 5; i <= 30; i += 5) // i = minute in increment of 5 min
                {
                    cout << "Calories burned in " << i << " minutes is " << (3.6 * i) << endl;
                }
                break;
            case 6: 
                cout << "You chose Problem 6" << endl;
                float speed, //speed of the vehicle in mph
                      dstnce; //distance the vehicle travel in miles
                int   hour; // hours the vehicle traveled in hour
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
                break;
            case 7: 
                cout << "You chose Problem 7" << endl;
                float salary; //salary of each day in dollars
                //      total; //total salary in dollars
                int   days, // number of days worked
                      pennies; // number of pennies paid each day

                //Output data
                cout << "How many days do you work?" << endl; 
                cin >> days;

                cout << "Days" << "\t" << "Salary of each day " << endl;
                cout << "------------------------------" << endl;

                while (days < 1)
                {
                    cout << "Number of days must be integer and greater than 0 " << endl;
                    cin >> days;
                }
                salary = 0.01;
                total = 0;

                for (int count = 1; count <= days; count ++) {        
                    cout << fixed << showpoint << setprecision(2) << endl;
                    cout << count << "\t\t $" << salary << endl;
                    total += salary;
                    salary *= 2;        
                }   
                cout << "-------------------------" << endl;
                cout << "Total" << "\t\t $" << total << endl;
                break;
            case 8: 
                cout << "You chose Problem 8" << endl;
                srand(static_cast<unsigned int>(time(0)));

                //Declare Variables
                float op1,op2, sol,correct;

                //Initial Variables

                int choice;

                while (true)
                {
                    cout << "Choose from the menu below." << endl;
                    cout << " Enter 1 for problem with addition." << endl;
                    cout << " Enter 2 for problem with subtraction." << endl;
                    cout << " Enter 3 for problem with multiplication." << endl;
                    cout << " Enter 4 for problem with division." << endl;
                    cout << "1. Addition." << endl;
                    cout << "2. Subtraction." << endl;
                    cout << "3. Multiplication." << endl;
                    cout << "4. Division." << endl;
                    cout << "5. Quit." << endl;
                    cin >> choice;

                    op1=rand()%999+1;//[1,999]
                    op2=rand()%999+1;  //[1,999]
                    switch (choice)
                    {
                        case 1:

                            cout << "You chose addition problem" << endl;
                            cout<<setw(5)<<op1<<endl;
                            cout<<"+ "<<setw(3)<<op2<<endl;
                            cout<<"-----"<<endl;
                            correct = op1 + op2;

                            break;

                        case 2:

                            cout << "You chose subtraction problem" << endl;
                            cout<<setw(5)<<op1<<endl;
                            cout<<"- "<<setw(3)<<op2<<endl;
                            cout<<"-----"<<endl;
                            correct = op1 - op2;

                            break;

                        case 3 : 

                            cout << "You chose multiplication problem" << endl;
                            cout<<setw(5)<<op1<<endl;
                            cout<<"x "<<setw(3)<<op2<<endl;
                            cout<<"-----"<<endl;
                            correct = op1 * op2;

                            break;

                        case 4 :

                            cout << "You chose division problem" << endl;
                            cout<<setw(5)<<op1<<endl;
                            cout<<"/ "<<setw(3)<<op2<<endl;
                            cout<<"-----"<<endl;
                            correct = op1 / op2;

                            break;

                        case 5: 

                            cout << "You have quit the math tutor program.";
                            break;

                        default: 
                            cout << "Error. Please choose different option!" << endl;            
                    }

                    if (choice < 5 && choice > 0)
                    {
                        cout << "Please enter your solution: ";
                        cin >> sol;
                        if (correct == sol) 
                            cout << "You have the correct answer!" << endl;
                        else
                            cout << "You got it wrong! The answer is " << correct << endl;
                    } else if (choice == 5) {
                        break;
                    }

                }
                break;
            case 10: 
                cout << "You chose Problem 10" << endl;
                float rnfll, //user inputs rainfall for each month, in inches
                //      total, //total rainfall for the entire period, in inches
                      avg; // average rainfall for each month, in inches
                int   months, // total of months rained 
                      years; // number of years of rainfall

                //Initialize Variables
                rnfll = 0;
                total = 0;
                avg = 0;
                months = 0;
                years = 0;

                //Output data
                cout << "How many years has it rained?" << endl; 
                cin >> years;

                while (years < 1)
                {
                    cout << "Number of year must be >1." << endl;
                    cin >> years;
                }
                while (rnfll < 0)
                {
                    cout << "Rainfall must be positive " << endl;
                    cin >> rnfll;
                } 
                total = 0; //initialize accumulator
                for (int year = 1; year <= years; year ++)
                {   
                    cout << "Year " << year << endl;

                    for (int month = 1; month <= 12; month ++)
                    {
                        cout << "Enter rainfall amount in inches for month " << month << ":\t";
                        cin >> rnfll;    
                        total += rnfll;
                    }
                }   
                avg = total/(12*years);
                months = 12 * years; 
                cout << fixed << showpoint << setprecision(1) << endl;
                cout << "The number of months rained is " << months << endl;
                cout << "The total rainfall is " << total << endl;
                cout << "Average rainfall for each month is " << avg << endl;
                break;
            case 13:
                cout << "You chose Problem 13" << endl;
                int x, // user inputs a series of integers
                    greatest, //largest integer in the series 
                    least;  // smallest integer in the series
                //Initialize Variables
                x = 0;
                greatest = -999999;
                least = 9999999;
                //Output data
                cout << "Enter a series of integer and -99 to stop" << endl;

                while (x != -99) 
                {     
                    cin >> x;
                    if (x < least) {
                        least = x;
                    }

                    if (x > greatest) {
                        greatest = x;
                    }

                }        
                cout << "Greatest number: " << greatest << endl;
                cout << "Least number: " << least << endl;
                break;
            case 20:
                cout << "You chose Problem 20" << endl;
                int //x, // user inputs guessing number
                    rndnum; // random number generated by the program

                x = 0;
                srand(static_cast<unsigned int>(time(0)));

                rndnum = rand()%999+1; //[1,999]
                cout << "Guess a number from 1 - 999.";

                while (x != rndnum)
                {
                    cin >> x;
                    if (x > rndnum)
                        cout << "Too high, try again." << endl;
                    else if (x < rndnum)
                        cout << "Too low, try again." << endl;
                    else
                        cout << "You guessed it right!" << endl;
                }
                break;
            case 0:
                cout << "You quit the program. Bye Bye!" << endl;
                return 0;
            default:
                cout << "Error. Please choose number form listed." << endl;
        }
    }
    //Exit stage right!
    return 0;
}