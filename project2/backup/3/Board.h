#ifndef BOARD_H
#define BOARD_H
#include <array>
#include "Player.h"
using namespace std;

class Board
{
 public:


  /*
   * This is the constructor for the board class.
   */ 
  Board(char * argv[]);

  /*
   * This is the main game loop.
   */ 
  void startGame();

 private:

  /*
   * This prints the current board
   */ 
  void printBoard() const;

  /*
   * Sets the board with blank spaces
   */ 
  void newGame();
  
  /*
   * Tells the player to make a move.
   */ 
  void move();

   /*
   * Checks to see if the game is over.
   */ 
  bool checkGameOver();

  /*
   * Checks to see if it was a draw.
   */ 
  bool checkDraw() const;

  /*
   * Checks to see if someone won, then retuns either 1 or 2 based on who won.
   */ 
  int checkWin() const;


  Player * p1,* p2;
  char squares[6][7];
  bool turn = false;

  
};

#endif
  
