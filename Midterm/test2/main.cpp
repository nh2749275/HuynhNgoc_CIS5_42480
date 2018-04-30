#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
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
    int number, x, y, z, t; 
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> number;
    
    t = number %10;
    z = number % 100;
    y = number % 1000;
    x = number % 10000;
    
    //Histogram Here
    static_cast<int> (t);
    static_cast<int> (z);
    static_cast<int> (y);
    static_cast<int> (x);
    
    
    if (t >= 0 && t <= 9){
        cout << t;
        for (int i = 1; i <= t; i++)
        cout << "*";
    }
    else {
        cout << t;
        cout << " ? " << endl;
    }
    
    if (z >= 0 && z <= 9){
        cout << z;
        for (int i = 1; i <= z; i++)
        cout << "*";
    }
    else {
        cout << z;
        cout << " ? " << endl;
    }
    
    if (y >= 0 && y <= 9){
        cout << y;
        for (int i = 1; i <= y; i++)
        cout << "*";
    }
    else {
        cout << y;
        cout << " ? " << endl;
    }
    
    if (x >= 0 && x <= 9){
        cout << x;
        for (int i = 1; i <= x; i++)
        cout << "*";
    }
    else {
        cout << x;
        cout << " ? " << endl;
    
    //Exit
    return 0;
}
