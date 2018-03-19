/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Cyborg Data Type Sizes
 * Created on March 1, 2018, 3:09 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    char size1;
    int size2;
    float size3;
    double size4;
    
//Display Outputs    
    cout << "A char is stored in " << sizeof(char) << "bytes\n";
    cout << "Variable size1 is stored in " << sizeof(size1) << "bytes\n";
    cout << "A int is stored in " << sizeof(int) << "bytes\n";
    cout << "Variable size2 is stored in " << sizeof(size2) << "bytes\n";
    cout << "A float is stored in " << sizeof(float) << "bytes\n";
    cout << "Variable size3 is stored in " << sizeof(size3) << "bytes\n";
    cout << "A double is stored in " << sizeof(double) << "bytes\n";
    cout << "Variable size4 is stored in " << sizeof(size4) << "bytes\n";
    return 0;
}

