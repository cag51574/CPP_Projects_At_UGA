#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H_H
#include "Player.h"
#include <string>
using namespace std;


class HumanPlayer : public Player
{
 public:
  HumanPlayer(const string name, const char piece);

  virtual int makeMove(char squares[6][7]) override;
};

#endif
