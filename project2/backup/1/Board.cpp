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
    p1 = new HumanPlayer();
    cout << "Player One, please enter your name: ";
    string  name1;
    cin >> name1;
    p1->setName(name1);
    
  }

  /*
   * Check for computer flag
   */ 
  if(s1.compare("-c")==0) {
    p1 =new SimpleComputerPlayer();
    p1->setName("Zoey");
  }

  /*
   * Check for human flag
   */ 
  if(s1.compare("-h")==0) {
    p2 = new HumanPlayer();
    cout << "Player Two, please enter your name: ";
    string  name2;
    cin >> name2;
    p2->setName(name2);
  }

  /*
   * Check for computer flag
   */ 
  if(s1.compare("-c")==0) {
    p2 = new SimpleComputerPlayer();
    p2->setName("Zoey");
  }

  
}


void Board::startGame() {
  bool flag = true;

  //Set up blank board
  for(auto &r : squares){
    for(auto &c : r){
      c = (char*)"_";
    }
  }
  
  while(flag == true){
    printBoard();
    makeMove();
    turn = !turn;
  }
}

void Board::printBoard() const{

  for(auto &r : squares){
    for(auto &c : r){
      cout << "|" << c;
    }
    cout << "|" << endl;
  }
}

void Board::makeMove() const{
  if(turn == false){
    cout << p1->getName();
  } else { 
    cout << p2->getName();
  }
  cout  << "'s turn, Please enter an integer between 1 and 7:" << endl;
}


void Board::setNames(const string n1, const string n2) const{
  p1->setName(n1);
  p2->setName(n2);
}
