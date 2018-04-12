 
#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player::Player(const string n,const char p) : name(n), piece(p) {}

/*
 * Returns the name of the player.
 */ 
string Player::getName() {
  return name;
}


/*
 * This should be implimented in each of the child classes.
 */ 
int Player::makeMove(char squares[6][7]) {
  return 0;
}
