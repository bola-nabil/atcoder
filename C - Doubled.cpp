#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
const long long INF = 1LL << 60;
#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
 
int main() {
    string s;
    cin >> s;
    ll ss = s.size(), ans;
    if(ss%2==0){
        if(stoi(s.substr(0,ss/2)) <= stoi(s.substr(ss/2,ss/2))) ans = stoi(s.substr(0,ss/2));
        else ans = stoi(s.substr(0,ss/2))-1;
    }
    else ans = pow(10,ss/2)-1;
    cout << ans << endl;
}