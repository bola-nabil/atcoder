#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }
  int count = 0;
  for (int i = Y; i < W; i++) {
    if (S.at(X - 1).at(i) == '#') {
      break;
    }
    count++;
  }
  for (int i = Y - 2; i >= 0; i--) {
    if (S.at(X - 1).at(i) == '#') {
      break;
    }
    count++;
  }
  for (int i = X; i < H; i++) {
    if (S.at(i).at(Y - 1) == '#') {
      break;
    }
    count++;
  }
  for (int i = X - 2; i >= 0; i--) {
    if (S.at(i).at(Y - 1) == '#') {
      break;
    }
    count++;
  }
  cout << count + 1 << endl;
  return 0;
}