/* 
 * File:   main.cpp
 * Author: Ngoc Huynh
 * Created on May 31, 2018, 4:20 AM
 * Purpose:  choose player for Yahtzee game
 */

//System Libraries
#include <iostream>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int dice[6],
        large = dice[0], //largest dice value
        small, //smallest dice value
        fstPlyr, //first player
        player[6],//player with a value of the dice
        choice; //the choice to start game or quit game
    //Initialize Variables
    
    //Process/Map inputs to outputs
        unsigned seed = time (0);
        srand (seed); 
        
        for (int i = 1; i<= players; i++){
            
            dice[i] = (rand() % 6) + 1;
            cout << "Player #" << i << ": " << dice[i] << endl;
            
        }
        
        cout << "The player with largest dice value goes first." << endl;
        large = dice[0];
        for (int j = 0; j < players; j++){
            if (dice[j] != dice[j+1]){
                if (dice[j] > large)
                    large = dice[j];
                    fstPlyr = player[j];
                cout << "Player #" << fstPlyr << " plays first." << endl;
                cout << "The second player is to the right of the 1st player." << endl;
                }
            else {
                cout << "Which players need to roll their dice again since they're tied?";
                cout << "Enter -1 to stop rolling" << endl;
            }
                
                if (dice[j] == dice[j+1]){
                    
                    dice[j+1] = (rand() % 6) + 1;
                    cout << "Player #" << j + 1 << " plays first" << endl;
                }
        
                cout << "Player #" << fstPlyr << " plays first." << endl;
                cout << "The second player is to the right of the 1st player." << endl;
            }
            int nDice = 0; // players re-roll their dice -> new dice values
            while (nDice != -1){
                cin >> nDice;
                if (nDice != -1) {
                        dice[nDice] = (rand() % 6) + 1;
                        for (int i = 1; i <= 5; i++)
                            cout << "Dice " << i << ": " << dice[i] << endl;
                    } 
                else if (nDice == 0)
                    break;
            }
            
                if (dice[j] != dice[j+1]){
                    if (dice[j] > large)
                    large = dice[j];
                    fstPlyr = player[j];
                }
                if (dice[j] == dice[j+1]){
                    
                    dice[j+1] = (rand() % 6) + 1;
                    cout << "Player #" << j + 1 << " plays first" << endl;
                }
        
        cout << "The second player is to the right of the 1st player." << endl;
            
        
        
    
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}