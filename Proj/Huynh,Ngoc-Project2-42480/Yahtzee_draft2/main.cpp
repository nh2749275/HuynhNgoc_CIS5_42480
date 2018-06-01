/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 31, 2018, 12:20 AM
 * Purpose: Yahtzee Game
 */

//System Libraries
#include <iostream>
#include <cstdlib> //rand and srand
#include <ctime> //time
#include <algorithm> //sort
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries
//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
//Function Prototypes
int totalDice(int, int);
int score(int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    // Declare Variables
    //int dice1, dice2, dice3, dice4, dice5; //number on each dice after rolled 3 times
    int total, // total score on 5 dice 
        choice, // user chooses when to start game and when to quit game
        dice[6], // dice[0], dice[1], dice[2], dice[3],dice[4], dice[5]
        numPlrs = 6,// # of players 
        plyRoll[numPlrs],
        sumOf[7];// sumOf[1], sumOf[2], sumOf[3],sumOf[4], sumOf[5], sumOf[6]
        
    char    roll(char);//player with a value of the dice
    float average; // average of score of 1 person after a certain games
    string name[3]; // name of 3 players
    
    //Randomize the dice
    srand(static_cast<unsigned int>(time(0)));
    
    //Each player rolls 1 dice
    int cntMax, // how many players have max values
        max, // max dice value when players play 
        maxPlyr; //the player that has the max dice value
    cout << "1. Press 1 to start game" << endl;
    cout << "0. Press 0 to quit game" << endl;
    cin >> choice;
    unsigned seed = time (0);
        srand (seed); 
        total = 0;
        for (int i = 1; i<= 6; i++){
        sumOf[i] = 0;
        }
    while (choice != 0){
        do {
            for (int i = 0; i < numPlrs; i++)
                plyRoll[i] = roll(1);
            //Who rolls first
            max = plyRoll[0];
            maxPlyr = 0;
            for (int i = 1; i < numPlrs; i++){
                if (plyRoll[i] > max){
                    max = plyRoll[i];
                    maxPlyr = i;
                }
            }
            cntMax = 0;
            for (int i = 0; i < numPlrs; i++){
                if (max == plyRoll[i])
                    cntMax++;
            }
        } 
        while (cntMax > 1);
        // Player with max dice value plays first
        cout << "Player #" << maxPlyr + 1 << " plays first." << endl;
        cout << "The second player is to the right of the 1st player." << endl;""

                
        cout << "You have 3 times to roll" << endl;
        cout << "roll #1 "  << endl;
        for (int i = 1; i <= 5; i++){
            dice[i] = (rand() % 6) + 1;
            cout << "Dice " << i << ": " << dice[i] << endl;
        }
        for (int x = 1; x <=2; x++){
            cout << "Enter 1 for roll #" << (x+1) << " or any number to end turn." << endl;
            cin >> choice;
            if (choice == 0){
                break;
            } else if (choice == 1) { 
                int cDice = 0; //new values for dices rolled
                cout << "Which dice you would like to roll again? (Enter -1 to stop re-roll)" << endl;
                while (cDice != -1){
                    cin >> cDice; 
                    if (cDice != -1) {
                        dice[cDice] = (rand() % 6) + 1;
                        for (int i = 1; i <= 5; i++)
                            cout << "Dice " << i << ": " << dice[i] << endl;
                    } 
                    else if (cDice == 0)
                        break;
                } 
                if (cDice == 0){
                    break;
                }
            } 
        }
        if (choice == 0){
            break;
        }
        cout << "Enter the number for the field you want to record your score" << endl;
        cout << "1. Aces (#of one's) -> sum of dices with the number 1" << endl;
        cout << "2. Twos (# of two's)-> sum of dices with the number 2" << endl;
        cout << "3. Threes (# of three's-> sum of dices with the number 3)" << endl;
        cout << "4. Fours (# of four's)-> sum of dices with the number 4" << endl;
        cout << "5. Fives (# of five's)-> sum of dices with the number 5" << endl;
        cout << "6. Sixes (# of six's)-> sum of dices with the number 6" << endl;
        cout << "7. 3 of a kind -> sum of all dice" << endl;
        cout << "8. 4 of a kind -> sum of all dice" << endl;
        cout << "9. Full house -> score is 25" << endl;
        cout << "10.Small straight (sequence of 4)-> score is 30" << endl;
        cout << "11.Large straight (sequence of 5)-> score is 40" << endl;
        cout << "12.Yahtzee! -> score is 50" << endl;
        cout << "13.Chance (any combination)-> sum of all dice" << endl;
        cin >> choice;
        
        bool out = false;
        while (!out) {
            switch (choice){
                case 1: {
                    int ret = score(dice, 1);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 1);
                    sumOf[1] = totDice * 1;
                    break;
                }
                case 2:{
                    int ret = score(dice, 2);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 2);
                    sumOf[2] = totDice * 2;
                    break;
                }
                case 3:{
                    int ret = score(dice, 3);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 3);
                    sumOf[3] = totDice * 3;
                    break;
                }
                case 4:{
                    int ret = score(dice, 4);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 4);
                    sumOf[4] = totDice * 4;
                    break;
                }
                case 5:{
                    int ret = score(dice, 5);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 5);
                    sumOf[5] = totDice * 5;
                    break;
                }
                case 6:{
                    int ret = score(dice, 6);
                    out = (ret == -1);
                    int totDice = totalDice(dice, 6);
                    sumOf[6] = totDice * 6;
                    break;
                }
                case 7: {
                    int sum7 = 0; // sum of all dice 
                    int* dcTemp = dice;
                    sort(dcTemp, dcTemp + 6);
                    int temp = dice[0]; // dice 0 2, 2, 2, 3, 5 // 3,5,2,3, 4
                    int total7 = 1; //total3 is number of dice that are the same
                    
                    out = true;
                    for (int a = 1; a <= 5; a++){
                        //cout << dice[a] << endl;
                        // 3 == 3
                        
                        if (temp == dice[a])
                            total7++; // total3 = 3
                        else if (total7 != 3)
                            total7 = 1; // reset number of dices that are the same to 1
                        else { 
                            cout << "Your score is " << sum7 << endl;
                            break;
                        } 
                        temp = dice[a]; // temp = 2;
                        sum7 += dice[a];
                    }
                    if (total7 != 3) {
                        cout << "You don't have 3 of a kind. Please choose another field." << endl;
                        cin >> choice;
                        out = false;
                    }
                    break;
                }
                case 8: {
                    int sum8 = 0; // sum of all dice 
                    int* dcTemp = dice;
                    sort(dcTemp, dcTemp + 6);
                    int temp = 0; // dice 0 2, 3, (3), 3, 3 
                    int total8 = 1; //total3 is number of dice that are the same
                    
                    out = true;
                    for (int a = 1; a <= 5; a++){
                        //cout << dice[a] << endl;
                        // 3 == 3
                        sum8 += dice[a];
                        if (temp == dice[a])
                            total8++; // total4 = 4
                        else if (total8 != 4)
                            total8 = 1; // reset number of dices that are the same to 1}
                        else {
                            cout << "Your score is " << sum8 << endl;
                            break; 
                        }
                        temp = dice[a]; // temp = 2;
                    }
                    if (total8 != 4) { 
                            cout << "You don't have 4 of a kind. Please choose another field." << endl;
                            cin >> choice;
                            out = false;
                    }
                    break;
                }
                case 9: {
                    int sum9 = 25; 
                    cout << "Your score is 25" << endl;
                    break;
                }
                case 10: {
                    int sum10 = 30;
                    cout << "Your score is 30" << endl;
                    break;
                }
                case 11: {
                    int sum11 = 40;
                    cout << "Your score is 40" << endl;
                    break;
                }
                case 12: {
                    int sum12; // sum of all dice 
                    int* dcTemp = dice;
                    int temp = 0; // dice 0 2, 3, (3), 3, 3 
                    int total12 = 1; //total3 is number of dice that are the same
                    out = true;
                    for (int a = 1; a <= 5; a++){
                        //cout << dice[a] << endl;
                        // 3 == 3
                        if (temp == dice[a])
                            total12++; // total4 = 4
                        else if (total12 != 5)
                            total12 = 1; // reset number of dices that are the same to 1}
                        else {
                            cout << "Yahtzee! Your score is 50" << endl;
                            break; 
                        }
                        temp = dice[a]; // temp = 2;
                    }
                    if (total12 != 5) { 
                            cout << "It's not Yahtzee! Please choose another field." << endl;
                            cin >> choice;
                            out = false;
                    }
                    break;
                }
                case 13: {
                    int sum13 = 0; // sum of all dice 
                    int temp = 0; // dice 0 2, 2, 2, 3, 5 // 3,5,2,3, 4
                    int tot13 = 1; //total3 is number of dice that are the same
                    
                    out = true;
                    for (int a = 1; a <= 5; a++){
                        //cout << dice[a] << endl;
                        // 3 == 3
                        sum13 += dice[a];
                        if (temp == dice[a]){
                            tot13++; // total3 = 3
                        } else {
                            tot13 = 1; // reset number of dices that are the same to 1
                        }
                    }
                    cout << "Your score is " << sum13 << endl;
                    break;
                }
                default: {
                    break;
                }
            }
            total = sumOf[1] + sumOf[2] + sumOf[3] + sumOf[4] + sumOf[5] + sumOf[6] 
                    + sum7 + sum8 + 25 + 30 + 40 + 50 + sum13;
        }
        
    }
    cout << "You've finished the game! Your total score is " << total << endl;
    
    
    
    //Exit stage right!
    return 0;
}
char roll(char a){
    char sum = 0;
    for (int i = 1; i <= n; i++){
        sum += rand()%6 + 1;
        
    }
        
}
int totalDice(int *dice, int numDice){
    int totDice = 0;
    for (int i = 1; i<= 5; i++){
        if (dice[i] == numDice)
            totDice++;
    }
    return totDice;
}

int score(int *dice, int numDice){
    int choice = -1;
    char answer;
    int totDice = totalDice(dice, numDice);

    if (totDice == 0){
        cout << "There's no dice with number 1. Are you sure you want to enter the score? n for No, else to proceed" << endl;
        cin >> answer;
        if (answer == 'n'){
            cout << "Please choose other field." << endl;
            cin >> choice;
        }
    } 
    cout << "Your score is " << totDice * numDice << endl;
    
    return choice;
}
