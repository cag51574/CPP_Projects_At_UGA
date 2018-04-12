#include <iostream>
#include "SimpleComputerPlayer.h"
#include <string>
#include <ctime>


using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer(const string name, const bool turn)
  : Player(name, turn)
{



  
}

int SimpleComputerPlayer::makeMove(string squares[6][7]) {
  for(int j = 0; j < 7;j++){
     for(int i = 5; i >= 0;i--){
       if(squares[i][j]=="_") {
	 if(getTurn() == false){
	   squares[i][j] = "X";
	 }else{
	   squares[i][j] = "0";
	 }
	 return 1;
       }
     }
  }

  return 0;
}
