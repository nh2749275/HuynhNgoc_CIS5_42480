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
    int players, //number of players
        dice[6],
        large = dice[0], //largest dice value
        small, //smallest dice value
        fstPlyr, //first player
        player[6],//player with a value of the dice
        choice; //the choice to start game or quit game
    //Initialize Variables
    
    //Process/Map inputs to outputs
     unsigned seed = time (0);
    srand (seed); 
    
        cout << "Enter how many players in total" << endl;
        cin >> players;
        cout << "Please roll a dice once." << endl;
        
        for (int i = 1; i<= players; i++){
            
            dice[i] = (rand() % 6) + 1;
            cout << "Player #" << i << ": " << dice[i] << endl;
            
        }
        
        cout << "The player with largest dice value goes first." << endl;
        large = dice[0];
        for (int j = 0; j < players; j++){
            if (dice[j] > large)
                large = dice[j];
                fstPlyr = player[j];
        }
        cout << "Player #" << fstPlyr << " plays first." << endl;
        cout << "The second player is to the right of the 1st player." << endl;
            
        
        
    
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}