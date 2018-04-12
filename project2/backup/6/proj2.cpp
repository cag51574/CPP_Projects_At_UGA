#include <iostream>
#include <cstdlib>
#include "Board.h"
#include <string>



int main(int argc, char * argv[]){

  cout << "Let's Start a Game of Connect 4" << endl;

  Board * b = new Board(argv);
  b->startGame();

  return EXIT_SUCCESS;
}

