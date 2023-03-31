#include<iostream>
#include<vector>
#include<string>
#include "player.h"

using namespace std;

//Default constructor for player class that initializes objects
Player::Player(){
    name = "MyPlayer";
    health = 0;
    n_battles = 0;
    n_wins = 0;
}

//Initialize objects with the following values
Player::Player(string myname, int myhealth, int mybattles){
    name = myname;
    health = myhealth;
    n_battles = mybattles;
    n_wins = 0;
}

//Display current state of the objects within the game
void Player::display(){
    cout << "Player name: " << name << endl;
    cout << "Remaining health: " << health << endl;
    cout << "Remaining battle: " << n_battles << endl;
}


//Initializes player and enemy and sets initial wins to 0
bool Player::game(Player& enemy) {
    int totalBattles = n_battles;
    int win = 0;
    
    //Loop through each of the three games
    for(int currentBattle = 1; currentBattle <= totalBattles; currentBattle++){
        cout << "********************** ";
        cout << "Current battle status " << currentBattle << "/" << totalBattles << " **********************" << endl;
        win += Player::battle(enemy);
        
    }
    
    //Determine who won by determining who got 2 or more wins out of 3
    if(win > totalBattles / 2){
        cout << "********************** ";
        cout << "Final winner is " << name << " **********************" << endl;
        return true;
    } else {
        cout << "********************** ";
        cout << "Final winner is " << enemy.name << " **********************" << endl;
        return false;
    }
        
}

//Declare how much health you want to use and let computer determine how much health it wants to use
bool Player::battle(Player& enemy)
{
int tempHealth;
int tempHealth2;
    cout << "---- Battle starts ----" << endl;
    cout << "You have " << health << " health points left." << endl;
    cout << "How many health points do you want to use? ";
    cin >> tempHealth;
    cout << name << " Chose to use " << tempHealth << " health points." << endl;
    tempHealth2 = rand() % enemy.health;
    cout << enemy.name << " Chose to use " << tempHealth2 << " health points." << endl;
    n_battles--;
    health = health - tempHealth;
    enemy.health = enemy.health - tempHealth2;
    
    //Determine who wins each battle out of 3 battles
    if(tempHealth > tempHealth2){
        cout << name << " wins this battle!" << endl;
        return 1;
    } else {
        cout << enemy.name << " wins this battle!" << endl;
        return 0;
    }
}



