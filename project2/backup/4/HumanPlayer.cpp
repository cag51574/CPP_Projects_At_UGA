 
 
#include <iostream>
#include "HumanPlayer.h"
#include <string>

using namespace std;

HumanPlayer::HumanPlayer(const string name, const char piece) : Player(name,piece) {}


int HumanPlayer::makeMove(char squares[6][7]) {
  string  name =getName();
  cout << name << "'s turn, Please enter an integer between 1 and 7:";
  int n;
  cin >> n;
  try{
    if(squares[0][n] != '_'){
      cout << "You can't move here." << endl;
      makeMove(squares);

    }
  }catch(int e){
    cout << "Invalid move"<<endl;
    makeMove(squares);
  }
  for(int i = 5; i > 0; i--){
    if(squares[i][n]=='_'){
      squares[i][n]=piece;
      return 1;
    }
  }
    
  return 0;
}
