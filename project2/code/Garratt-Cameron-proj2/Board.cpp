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
    p1 = new HumanPlayer(name, 'X');
  }

  /*
   * Check for computer flag
   */ 
  if(s1.compare("-c")==0) {
    cout << "Player One, please enter your name: Zoey" << endl;
    p1 =new SimpleComputerPlayer("Zoey", 'X');
  }

  /*
   * Check for human flag
   */ 
  if(s2.compare("-h")==0) {
    cout << "Player Two, please enter your name: ";
    string  name;
    cin >> name;
    p2 = new HumanPlayer(name, '0');
  }

  /*
   * Check for computer flag
   */ 
  if(s2.compare("-c")==0) {
    cout << "Player Two, please enter your name: Zoey"<< endl;
    p2 = new SimpleComputerPlayer("Zoey", '0');
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
    int y = move();
    printBoard();
    if(checkGameOver(y))
      flag = false;
    turn = !turn;
  }
}


/*
 * This prints the current board
 */ 
void Board::printBoard() const{

  for(auto &r : squares){
    for(auto &c : r){
      cout << "|" << c;
    }
    cout << "|" << endl;
  }
}


/*
 * Sets the board with blank spaces
 */ 
void Board::newGame(){
  //Set up blank board
  for(auto &r : squares){
    for(auto &c : r){
      c = '_';
    }
  }
}


/*
 * Tells the player to make a move.
 */ 
int Board::move() {
  if(turn == false){
    return p1->makeMove(squares);
  } else { 
    return p2->makeMove(squares);
  }
  
}


/*
 * Checks to see if the game is over.
 */ 
bool Board::checkGameOver(int y) const{

  if(checkDraw() == true){
    cout << endl;
    cout << "\nThe board is full, it is a draw!" << endl;
    return true;
  }
   
  int temp = checkWin();
  if(temp == 1){
    cout << endl;
    cout << p1->getName() << " Connected Four and Wins!" << endl;
    return true;
  }else if(temp == 2){
    cout << endl;
    cout << p2->getName() << " Connected Four and Wins!" << endl;
    return true;
  }
  return false;
}




/*
 * Checks to see if it was a draw.
 */ 
bool Board::checkDraw() const{

  for(int i = 0; i < 7; i++){
      if(squares[0][i] == '_'){
        return false;
    }
  }
  return true;
}
      
/*
 * Checks to see if someone won, then retuns either 1 or 2 based on who won.
 */ 
int Board::checkWin() const{
  char piece;
  int temp;
  turn==false ? piece = 'X' : piece = '0';
   
  for(int x = 5; x >= 0; x--){
    for(int y = 0; y < 7; y++){
      for(int z = 1; z < 4; z++){
      if(squares[x][y]==piece){
        int count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x+z][y+z] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x][y+z] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x+z][y] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x-z][y-z] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x-z][y] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(squares[x][y-z] == piece){
              count++;
              if(count == 3){
                turn == false ? temp = 1 : temp = 2;
                return temp;
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(y+z < 7 && x-z >= 0){
              if(squares[x-z][y+z] == piece){
                count++;
                if(count == 3){
                  turn == false ? temp = 1 : temp = 2;
                  return temp;
                }
              }
            }
          }catch(int  ex){}
        }
        count = 0;
        for(int z = 1; z < 4; z++){
          try{
            if(x+z < 6 && y-z >=0){
              if(squares[x+z][y-z] == piece){
                count++;
                if(count == 3){
                  turn == false ? temp = 1 : temp = 2;
                  return temp;
                }
              }
            }
          }catch(int  ex){}
        }
      }
    }
  }
  }
  return 0;
}
