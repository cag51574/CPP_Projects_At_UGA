#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H_H
#include "Player.h"
#include <string>
using namespace std;


class HumanPlayer : public Player
{
 public:
  HumanPlayer(const string name,const bool turn);
  virtual int makeMove(char * squares) override;
};

#endif
