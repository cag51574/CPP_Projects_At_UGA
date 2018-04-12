#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H_H
#include "Player.h"
#include <string>
using namespace std;

class SimpleComputerPlayer : public Player
{
 public:

  SimpleComputerPlayer();
  void makeComputerMove(string squares[6][7]) const;
};

#endif
