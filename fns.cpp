#include <iostream>
#include <vector>
#include "fns.hpp"
#include <stdlib.h>
//displays the screen with character input
void display_screen(std::vector<char> top,std::vector<char> middle,std::vector<char> bottom){
  std::cout << "Follow the format\n"<<"Numbers first then letters\n";
  std::cout << " |1|" << "|2|" <<"|3|" <<"\n";
  std::cout << "a";
  for(int i = 0; i<top.size(); i++){
    std::cout << '|'<< top[i] << '|';
  }std::cout << '\n';
  std::cout << "b";
  for(int i = 0; i<middle.size(); i++){
    std::cout << '|'<< middle[i] << '|';
  }std::cout << '\n';
  std::cout << "c";
  for(int i = 0; i<bottom.size(); i++){
    std::cout << '|'<< bottom[i] << '|';
  }std::cout << '\n';
}
//the move they have done and the positions they are at
void move_done(std::string choice, std::vector<char>& top,std::vector<char>& middle,std::vector<char>& bottom, char p1_x,char p2_o,int& turns){
    if(choice == "1a"){
    if(turns%2 == 0){
      top[0] = p2_o;
    }else {
      top[0] = p1_x;
    }
  
  }else if(choice == "2a"){
    if(turns%2 == 0){
      top[1] = 'o';
    }else {
      top[1] = p1_x;
    }
    
  }else if(choice == "3a"){    
    if(turns%2 == 0){
      top[2] = p2_o;
    }else {
      top[2] = p1_x;
    }
  }else if(choice == "1b"){

    if(turns%2 == 0){
      middle[0] = p2_o;
    }else {
      middle[0] = p1_x;
    }

  }else if(choice == "2b"){
   if(turns%2 == 0){
      middle[1] = p2_o;
    }else {
      middle[1] = p1_x;
    }
  }else if(choice == "3b"){
   if(turns%2 == 0){
      middle[2] = p2_o;
    }else {
      middle[2] = p1_x;
    }
  }
  else if(choice == "1c"){
   if(turns%2 == 0){
      bottom[0] = p2_o;
    }else {
      bottom[0] = p1_x;
    }
  }else if(choice == "2c"){
   if(turns%2 == 0){
      bottom[1] = p2_o;
    }else {
      bottom[1] = p1_x;
    }
  }else if(choice == "3c"){
   if(turns%2 == 0){
      bottom[2] = p2_o;
    }else {
      bottom[2] = p1_x;
    }
  }else{
    std::cout <<"Not a choice\n";
    turns++;
  }
}

void end_game(bool& p1,bool& p2, bool win, std::vector<char>& top,std::vector<char>& middle,std::vector<char>& bottom, char p2_o, char p1_x, int& turns){
  if(bottom[0] == 'x' && bottom[1] == 'x' && bottom[2] == 'x'){
    p1 = true;
  }else if(middle[0] == 'x' && middle[1] == 'x' && middle[2] == 'x'){
    p1 = true;
  }else if(top[0] == 'x' && top[1] == 'x' && top[2] == 'x'){
    p1 = true;
  }else if(bottom[0] == 'x' && middle[0] == 'x' && top[0] == 'x'){
    p1 = true;
  }else if(bottom[1] == 'x' && middle[1] == 'x' && top[1] == 'x'){
    p1 = true;
  }else if(bottom[2] == 'x' && middle[2] == 'x' && top[2] == 'x'){
    p1 = true;
  }else if(top[0] == 'x' && middle[1] == 'x' && bottom[2] == 'x'){
    p1 = true;
  }else if(top[2] == 'x' && middle[1] == 'x' && bottom[0] == 'x'){
    p1 = true; //bottom o
  }else if(bottom[0] == 'o' && bottom[1] == 'o' && bottom[2] == 'o'){
    p2 = true;
  }else if(middle[0] == 'o' && middle[1] == 'o' && middle[2] == 'o'){
    p2 = true;
  }else if(top[0] == 'o' && top[1] == 'o' && top[2] == 'o'){
    p2 = true;
  }else if(bottom[0] == 'o' && middle[0] == 'o' && top[0] == 'o'){
    p2 = true;
  }else if(bottom[1] == 'o' && middle[1] == 'o' && top[1] == 'o'){
    p2 = true;
  }else if(bottom[2] == 'o' && middle[2] == 'o' && top[2] == 'o'){
    p2 = true;
  }else if(top[0] == 'o' && middle[1] == 'o' && bottom[2] == 'o'){
    p2 = true;
  }else if(top[2] == 'o' && middle[1] == 'o' && bottom[0] == 'o'){
    p2 = true;
  }
  
  
  
  
  
  if(p1){
    std::cout << "player 1 wins\n";
    exit(0);
  }else if(p2){
    std::cout << "player 2 wins\n";
    exit(0);
  }else if(turns == 0){
    std::cout << "BOOO A TIE COME ON\n";
    exit(0);
  }
}
