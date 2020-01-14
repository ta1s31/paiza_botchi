//https://paiza.jp/botchi/challenges/botchi_c_3003
#include <iostream>

using namespace std;

int jankenGame(char handA, char handB){
  if(handA == 'g'){
    if(handB == 'g') return -1;
    if(handB == 'c') return 0;
    if(handB == 'p') return 1;
  }else if(handA == 'c'){
    if(handB == 'g') return 1;
    if(handB == 'c') return -1;
    if(handB == 'p') return 0;
  }else{//pのとき
    if(handB == 'g') return 0;
    if(handB == 'c') return 1;
    if(handB == 'p') return -1;
  }
  return -2;
}

int main(){
  int userA_score = 0, userB_score = 0;
  int janken_games_count = 0;
  std::cin >> janken_games_count;

  for(int i = 0; i < janken_games_count; ++i) {
    char userA_hand,userB_hand;
    std::cin >> userA_hand >> userB_hand;
    if(jankenGame(userA_hand, userB_hand) == 0){
      //Aの勝ち
      ++userA_score;
    }else if(jankenGame(userA_hand, userB_hand) == 1){
      //Bの勝ち
      ++userB_score;
    }
  }

  std::cout << userA_score << endl << userB_score << endl;
  return 0;
}