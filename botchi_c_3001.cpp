//https://paiza.jp/botchi/challenges/botchi_c_3001
#include <iostream>
//using namespace std;

int lengthInt(int number){
    if(number == 0){
        return 1;
    }
    int counter = 0;
    while(number != 0){
        number /= 10;
        counter++;
    }
    return counter;
}

int main(){
    int digits, startNum, endNum;
    std::cin >> digits >> startNum >> endNum;
    //cout << digits << startNum << endNum << endl;

    for(; startNum <= endNum; startNum++){
        int residue = digits - lengthInt(startNum);
        for(int i = 0; i < residue;i++){
            std::cout<<"0";
        }
        std::cout<<startNum<<std::endl;
    }
    return 0;
}