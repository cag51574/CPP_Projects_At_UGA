#include <iostream>
#include "SimpleComputerPlayer.h"
#include <string>


using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer(const string name, const char piece)
  : Player(name, piece) {}

int SimpleComputerPlayer::makeMove(char squares[6][7]) {
  cout << getName() << "'s turn, Please enter an integer between 1 and 7: " ;
  for(int j = 0; j < 7;j++){
     for(int i = 5; i >= 0;i--){
       if(squares[i][j]=='_') {
         squares[i][j] = piece;
         cout << (j+1) << endl;
         return 1;
       }
     }
  }
  return 0;
}
