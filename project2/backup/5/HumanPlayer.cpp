 
 
#include <iostream>
#include "HumanPlayer.h"
#include <string>

using namespace std;

HumanPlayer::HumanPlayer(const string name, const char piece) : Player(name,piece) {}


int HumanPlayer::makeMove(char squares[6][7]) {
  string  n =getName();
  cout << n << "'s turn, Please enter an integer between 1 and 7: ";
  int  move; cin >> move;
  try{
    if(move > 0 && move < 8){
      for(int i = 5; i >= 0; i--){
        if(squares[i][move-1]=='_'){
          squares[i][move-1]=piece;
          return 1;
        }
      }
      cout << "The column you have selected is full. Please try again." << endl;
      makeMove(squares);
    }else{
      cout << "Your move was not in bounds. Please try again." << endl;
      makeMove(squares);
    }
  }catch(int e){
    cout << "Invalid move. Please try again." << endl;
    makeMove(squares);
  }

  return 0;
}
