//https://paiza.jp/botchi/challenges/botchi_d_4002
#include <iostream>
#include <string>
using namespace std;

int main(){
  int check_document_count = 0;
  std::cin >> check_document_count;

  for(int i = 0; i < check_document_count; ++i){
    std::string title;
    int priority;

    std::cin >> title >> priority;
    if(priority == 3){
      std::cout << title << endl;
    }

  }
  return 0;
}