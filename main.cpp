
/* PIC10A Battle with enemy
* Coded by Weiqi Chu
*/

/*
#include<iostream>
#include<iomanip>
#include<ctime>
#include<stdlib.h>
#include"Player.h"
using namespace std;
int main()
{
srand(static_cast<int>(time(nullptr)));
// set total health points and number of battles
const int TOTAL_HEALTH = 100; // if I change 100 to other numers, your code should still work

const int N_BATTLES = 3; // if I change 3 to other numbers, your code should still work

// initialize two Players: Skywalker and Vader
// User will play as Skywalker and computer will play as Vader
Player Skywalker("Anakin Skywalker", TOTAL_HEALTH, N_BATTLES);
Player Vader("Darth Vader", TOTAL_HEALTH, N_BATTLES);
// test battle and display function
bool player_win = Skywalker.battle(Vader);
cout << player_win << endl;
Skywalker.display();
return 0;
}
*/
 
/* PIC10A Battle with enemy
* Coded by Weiqi Chu
*/


#include<iostream>
#include<iomanip>
#include<ctime>
#include<stdlib.h>
#include"Player.h"
using namespace std;
int main()
{
srand(static_cast<int>(time(nullptr)));
// set total health points and number of battles
const int TOTAL_HEALTH = 100; // if I change 100 to other numers, your code
//should still work
const int N_BATTLES = 3; // if I change 3 to other numbers, your code should
//still work
// initialize two Players
Player p1("Human", TOTAL_HEALTH, N_BATTLES);
Player p2("Computer", TOTAL_HEALTH, N_BATTLES);
// conduct one game consisting of N_BATTLES battles
// first argument is played by the Player and the second argument is played by
//computer (random number generators)
p1.game(p2);
return 0;
}


