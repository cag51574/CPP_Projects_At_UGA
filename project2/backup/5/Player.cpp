 
#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player::Player(const string n,const char p) : name(n), piece(p) {}

string Player::getName() {
  return name;
}

int Player::makeMove(char squares[6][7]) {
/*

  for(int i = 0; i < 6;i++){
     for(int i = 0; i < 7;i++){
       cout <<  rand()%6 << endl;
       

     }
  }

*/
  return 0;
}
