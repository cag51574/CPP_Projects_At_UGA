#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H_H
#include "Player.h"
#include <string>
using namespace std;

class SimpleComputerPlayer : public Player
{
 public:

  SimpleComputerPlayer(const string name, const bool turn);
  virtual int makeMove(string squares[6][7]) override;

};

#endif
