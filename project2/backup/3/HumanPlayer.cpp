 
 
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


int HumanPlayer::makeMove(char * squares) {

  for(int n = 0; n < 42; n++){
    int s = (n*7)+((n+1)%7);
    if(*squares=='_'){
      if(getTurn() == false){
        *squares = 'X';
      }else{
        *squares = '0';
      }
      return 1;
    }
    squares++;
  }
  /*
  for(int j = 0; j < 7;j++){
     for(int i = 5; i >= 0;i--){
       if(squares[i][j]=="_") {
	 squares[i][j] = "X";
	 return 1;
       }
     }
  }
  */

   return 0;
}
