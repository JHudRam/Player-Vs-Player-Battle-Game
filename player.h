/*
 
 Jacob Ramos
 PIC-10A
 HomeWork #7: player.h
 UID: 505-927-969

 */

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Declare Player class
class Player
{

//Initialize variables that will be called in the cpp file
private:
    
    string name;
    int health;
    int n_battles;
    int n_wins;
    
public:
    
    //Add functions to be used in the cpp file
    Player();

    Player(string myname, int myhealth, int mybattles);
    
    void display();
    
    bool game(Player& enemy);

    bool battle(Player& enemy);

    
};

#endif

