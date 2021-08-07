//
// Created by Kylian Lee on 2021/08/07.
//

#include <iostream>
#include <cmath>

using namespace std;

string solution(int max, int x, int y);

int main(){
  int a, b, c;
  while(true){
    cin >> a >> b >> c;
    if(a == 0)
      break;
    if(a > b){
      if(c > a){
        cout << solution(c, a, b) << endl;
      }
      else{
        cout << solution(a, b, c) << endl;
      }
    }
    else{
      if(c > b){
        cout << solution(c, a, b) << endl;
      }
      else{
        cout << solution(b, a, c) << endl;
      }
    }
  }
  return 0;
}

string solution(int max, int x, int y){
  if(pow(max, 2) == pow(x, 2) + pow(y , 2))
    return "right";
  else
    return "wrong";
}