#include <iostream>
#include <vector>
#include "fns.hpp"

int main(){
  std::string player_1;
  std::string player_2;
  std::string choice;
  char p1_x = 'x';
  char p2_o = 'o';
  bool p1 = false;
  bool p2 = false;
  bool win = true;
  std::vector<char> top = {'#','#','#'};
  std::vector<char> middle = {'#','#','#'};
  std::vector<char> bottom = {'#','#', '#'};
  int turns = 9;
 
  while(turns > 0){
    display_screen(top,middle,bottom);
    if(turns%2==0){
      std::cout <<"Player two's turn: \n";
      std::cout << "What is your input:\n";
      std::cin >> choice;
      move_done(choice,top,middle,bottom,p1_x, p2_o,turns);
      end_game(p1,p2,win,top,middle,bottom,p1_x,p2_o,turns);
    }else{
      std::cout <<"Player one's turn: \n";
      std::cout << "What is your input:\n";
      std::cin >> choice;
      move_done(choice,top,middle,bottom,p1_x, p2_o,turns);
      end_game(p1,p2,win,top,middle,bottom,p1_x,p2_o,turns);
    }
    turns--;

}
  
  return 0;
}