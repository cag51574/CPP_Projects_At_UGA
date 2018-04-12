#include <iostream>
#include "SimpleComputerPlayer.h"
#include <string>

using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer(){

  
}

void SimpleComputerPlayer::makeComputerMove(string squares[6][7]) const{
  for(const string &r : squares){
    for(const string &c : r){
      c = (char*)"_";
    }
  }

}
