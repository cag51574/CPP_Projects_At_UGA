#ifndef BOARD_H
#define BOARD_H
#include <string>
#include <array>
#include "Player.h"
using namespace std;

class Board
{
 public:

  Board(char * argv[]);
  void startGame() ;
  void printBoard() const;
  void gameOver(const char &, const char &) const;
  void setPlayers(char * argv[]) ;
  void makeMove()const;
  void setNames(const string name1, const string name2)const;

 private:
  Player * p1,* p2;
  string squares[6][7];
  bool turn = false;

  
};

#endif
  
