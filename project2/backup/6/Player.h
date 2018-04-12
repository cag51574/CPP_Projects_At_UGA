#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
 

class Player
{

 public:

  /*
   * This is the constructor for the Player class.
   */ 
  Player(const string name,const char piece);

  /*
   * Returns the name of the player.
   */ 
  string getName();

  /*
   * Player makes a move.
   */ 
  virtual int makeMove(char squares[6][7]);

 protected:
  string name;
  char piece;

};


#endif
