#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
 

class Player
{

 public:
  Player(const string name,const bool turn);
  string getName();
  virtual int makeMove(string squares[6][7]);

 protected:
  bool getTurn() const{return turn;}

 private:
  string name;
  bool turn;

};


#endif
