#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H_H
#include "Player.h"
#include <string>
using namespace std;

class SimpleComputerPlayer : public Player
{
 public:

  /*
   * This is the constructor for the Simple Computer Player class.
   */ 
  SimpleComputerPlayer(const string name, const char piece);


  /*
   * Overrides the parent make move.
   */ 
  virtual int makeMove(char squares[6][7]) override;

};

#endif
