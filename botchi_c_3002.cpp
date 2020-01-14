//https://paiza.jp/botchi/challenges/botchi_c_3002
#include <iostream>
#include <cctype>

bool checkPasswordLength(std::string password){
  int password_length = (int)password.size();
  if(password_length < 5){
    return false;
  }
  return true;
}

bool checkIncludingAlphanumeric(std::string password){
  int password_length = (int)password.size();
  int numCounter = 0, strCounter = 0;
    for(int i = 0; i <= password_length; i++){
      char checkStr = password[i];

      if( (checkStr>='a'&& checkStr<='z') || (checkStr>='A' && checkStr<='Z')){
        strCounter++;
      }else if (checkStr>='0'&& checkStr<='9'){
        numCounter++;
      }
      //英数字両方のカウンタが0より多くなった時
      if(strCounter > 0 && numCounter > 0){
        return true;
      }
    }
    if(strCounter == 0 || numCounter == 0){
      return false;
    }
    return true;
}

bool checkThreeDuplicateCharacters(std::string password){
  int password_length = (int)password.size();
  char tmpStr = '\0';
  int continuous = 0;
  for(int i = 0; i<= password_length; i++){
    char checkStr = password[i];
    if(checkStr == tmpStr){
      continuous++;
    }else{
      continuous = 0;
    }
    tmpStr = checkStr;
    //3連続で文字が被った場合
    if(continuous >= 2){
      return false;
    }
  }
  return true;
}

std::string validCheck(std::string password) {
    //長さチェック(6文字以上)
    if(!checkPasswordLength(password)){
        return "Invalid";
    }
    //英字と数字両方含むか
    if(!checkIncludingAlphanumeric(password)){
      return "Invalid";
    }
    //同じ文字が三文字連続かどうか
    if(!checkThreeDuplicateCharacters(password)){
      return "Invalid";
    }
    return "Valid";
}

int main(){
    std::string input_password = "";
    std::cin >> input_password;
    
    std::cout << validCheck(input_password) << std::endl;
    return 0;
}