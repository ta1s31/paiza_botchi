//https://paiza.jp/botchi/challenges/botchi_d_5004
#include <iostream>

using namespace std;
int main(){
  int counter = 0;
  int connectCount;
  std::cin >> connectCount;
  for(int i = 0; i < connectCount; ++i){
    int inputNum = 0;
    std::cin >> inputNum;
    if(inputNum > 5){
        ++counter;
    }
  }
  
  std::cout << counter << std::endl;
  return 0;
}