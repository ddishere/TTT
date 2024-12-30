#include <iostream>
#include <vector>
#include <stdlib.h>
void end_game(bool& p1,bool& p2, bool win, std::vector<char>& top,std::vector<char>& middle,std::vector<char>& bottom, char p2_o, char p1_x, int& turns);
void move_done(std::string choice, std::vector<char>& top,std::vector<char>& middle,std::vector<char>& bottom, char p1_x,char p2_o,int& turns);
void display_screen(std::vector<char> top,std::vector<char> middle,std::vector<char> bottom);
