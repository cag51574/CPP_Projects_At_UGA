 
 
#include <iostream>
#include "HumanPlayer.h"
#include <string>

using namespace std;

HumanPlayer::HumanPlayer(const string name,const bool turn)
  : Player(name,turn)
{}
/*
  : name(name), turn(turn)
*/


int HumanPlayer::makeMove(string squares[6][7]) {
  for(int j = 0; j < 7;j++){
     for(int i = 5; i >= 0;i--){
       if(squares[i][j]=="_") {
	 squares[i][j] = "X";
	 return 1;
       }
     }
  }

   return 0;
}
