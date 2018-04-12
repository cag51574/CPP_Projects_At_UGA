#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
 

class Player
{

 public:

  Player();
  void setName(const string n);
  string getName();
  void makeMove();

 private:
  string name;

};


#endif
