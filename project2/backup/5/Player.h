#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
 

class Player
{

 public:
  Player(const string name,const char piece);
  string getName();
  virtual int makeMove(char squares[6][7]);

 protected:
  string name;
  char piece;

};


#endif
