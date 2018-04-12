 
#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player::Player(){

  
}

void Player::setName(const string n) {
  name = n;
}

string Player::getName() {
  return name;
}
