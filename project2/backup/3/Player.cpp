 
#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(const string n, const bool t)
  : name(n), turn(t)
/*
  : name (name), turn(turn)
*/
{

  
}

string Player::getName() {
  return name;
}

int Player::makeMove(char * squares) {
/*

  for(int i = 0; i < 6;i++){
     for(int i = 0; i < 7;i++){
       cout <<  rand()%6 << endl;
       

     }
  }

*/
  return 0;
}
