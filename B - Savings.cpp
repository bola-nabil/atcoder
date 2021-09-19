#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

// なぜ通らないかよく分からない
ll b(int mid){
  ll _mid = (ll)mid;
  return _mid * (_mid + 1ll) / 2ll;
}

int main() {
  ll n;
  cin >> n;
  int right = 0, left = 10000008;
  while(left - right > 1){
    int mid = (left + right) / 2;
    ll result = b(mid);
    if(result < n) right = mid;
    else left = mid;
  }
  cout << left << endl;
  return 0;
}