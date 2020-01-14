//https://paiza.jp/botchi/challenges/botchi_b_2002
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> calcGamesResults(int team_number, std::string team_results, int team_count) {
  std::vector<int> v;
  int team_point = 0;

  int winner_count = 0;
  int draw_count = 0;
  int lose_count = 0;

  for (int i = 0; i < team_count; ++i){
    if(team_results[i] == 'W'){
      team_point += 2;
      ++winner_count;
    }else if(team_results[i] == 'D'){
      team_point += 1;
      ++draw_count;
    }else if(team_results[i] == 'L'){
      ++lose_count;
    }
  }
  v.push_back(team_number + 1);
  v.push_back(team_point);
  v.push_back(winner_count);
  v.push_back(draw_count);
  v.push_back(lose_count);

  return v;
}

int main(){
  int champion_team_id = 0;
  int champion_point = 0;
  std::vector<std::vector<int>> teams;
  int team_count = 0;
  std::cin >> team_count;

  for(int i = 0; i < team_count; ++i){
    std::string team_results = "";
    std::cin >> team_results;
    std::vector<int> calced_result = calcGamesResults(i, team_results, team_count);
    //優勝者あぶり出し
    if(champion_point < calced_result[1]){
      champion_team_id = calced_result[0];
      champion_point = calced_result[1];
    }

    teams.push_back(calced_result);
  }
  std::vector<int> champion = teams[champion_team_id - 1];
  std::cout << champion[0] << " " << champion[1] << " " << champion[2] << " " << champion[3] << " " << champion[4] <<endl;
  return 0;
}