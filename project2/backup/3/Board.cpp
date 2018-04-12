#include <iostream>
#include <string>
#include "SimpleComputerPlayer.h"
#include "HumanPlayer.h"
#include "Player.h"
#include "Board.h"


using namespace std;

Board::Board(char * argv[]){
  string s1 = argv[1];
  string s2 = argv[2];
  
  /*
   * Check for human flag
   */ 
  if(s1.compare("-h")==0) {
    cout << "Player One, please enter your name: ";
    string  name;
    cin >> name;
    p1 = new HumanPlayer(name, false);
  }

  /*
   * Check for computer flag
   */ 
  if(s1.compare("-c")==0) {
    cout << "Player One, please enter your name: Zoey";
    p1 =new SimpleComputerPlayer("Zoey", false);
  }

  /*
   * Check for human flag
   */ 
  if(s2.compare("-h")==0) {
    cout << "Player Two, please enter your name: ";
    string  name;
    cin >> name;
    p2 = new HumanPlayer(name, true);
  }

  /*
   * Check for computer flag
   */ 
  if(s2.compare("-c")==0) {
    cout << "Player Two, please enter your name: Sammy";
    p2 = new SimpleComputerPlayer("Sammy", true);
  }
}


/*
 * This is the main game loop.
 */ 
void Board::startGame(){
  bool flag = true;
  newGame();
  printBoard();

  while(flag == true){
    move();
    printBoard();
    turn = !turn;
    if(checkGameOver()==true){
      flag == false;
    }
  }
}


/*
 * This prints the current board
 */ 
void Board::printBoard() const{
  for(int i = 0; i <42; i++){
    cout << "|" << squares[i];
    if((i+1)%7==0){
      cout << "|" << endl;
    }
  }

}


/*
 * Sets the board with blank spaces
 */ 
void Board::newGame(){
  for(int i = 0; i < 42; i++){
    squares[i] = '_';
  }
}


/*
 * Tells the player to make a move.
 */ 
void Board::move() {
  if(turn == false){
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7:";
    p1->makeMove(&squares[0]);
  } else { 
    cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7:";
    p2->makeMove(&squares[0]);
  }
  cout << endl;
}


/*
 * Checks to see if the game is over.
 */ 
bool Board::checkGameOver() {

  struct Check {
    
    char* s;
    Check( char * squares):s(squares){}
    
    bool checkDraw() {
      for(int i = 0; i < 42; i= i + 6){
	
        if(*s =='_')
          return false;

        cout << *s << " " << i << endl;
	s = s+6;
      }
      return true;
    }
  };
  return Check(&squares[0]).checkDraw();

    /*

    int bar (int y) {
      return x * x + y;
    }

 


  string q[6][7] = squares;
  
  bool draw = [&q]() -> bool
    {
      for(auto &r : q){
        for(auto &c : r){
          if(c == "_"){
            return false;
          }
        }
      }
      return true;
    };
    

  if(checkDraw() == true){
    cout << "\nThe board is full, it is a draw!" << endl;
    return true;
  }
  int temp = checkWin();
  if(temp == 1){
    cout << p1->getName() << " Connected Four and Wins!" << endl;
    return true;
  }else if(temp == 2){
    cout << p2->getName() << " Connected Four and Wins!" << endl;
    return true;
  }
  */
}

/*
 * Checks to see if it was a draw.
 */ 
bool Board::checkDraw() const{
  for(int i = 0; i < 42; i= i + 6){
    if(squares[i] =='_'){
      return false;
    }
    cout << i << endl;
  }
  /*
  for(auto &r : squares){
    for(auto &c : r){
      /*
      if(c == "_"){
        return false;
      }
    }
  }
*/
  return true;
}
      
/*
 * Checks to see if someone won, then retuns either 1 or 2 based on who won.
 */ 
int Board::checkWin() const{
  string piece;
  string tempPiece;
  turn==false ? piece = "X" : piece = "0";
   
  for(int y = 5; y > 0; y--){
    int count = 0;
    for(int checkDiagonal = 3; checkDiagonal >= 0; checkDiagonal--){
      


        
      /*
      cout << "coord:  " << checkDiagonal << "," << y << endl;
      cout << "piece:  " << piece << endl;
      cout << "count:  " << count << endl;
      cout << endl;



      if(squares[checkDiagonal][y] == piece){
        count++;
        if(count == 3)
          return 1;
      }

      if(squares[checkDiagonal][y] == piece){
        count++;
        if(count == 3)
          return 1;
      }

      if(squares[checkDiagonal][y] == piece){
        count++;
        if(count == 3)
          return 1;
      }
      
         */

     


    }



  }
  return 0;
}

    
    
    

      
    

