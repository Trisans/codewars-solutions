#include<vector>
#include<iostream>

bool isValidWalk(std::vector<char> walk) {
  int x = 0;
  int y = 0;
  
  for (int i = 0; i < walk.size(); i++) {
    if (walk[i] == 'n') {
      y++;
    } else if (walk[i] == 's') {
      y--;
    } else if (walk[i] == 'w') {
      x--;
    } else if (walk[i] == 'e') {
      x++;
    }
  }
  if (walk.size() == 10 && x == 0 && y == 0) {
    return true;
  } else {
    return false;
  }
}