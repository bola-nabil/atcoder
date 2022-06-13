#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
void solve() {
    vector<pair <string, bool >>a(4);
    map<string, bool>mp;
    mp["ABC"] = true;
    mp["ARC"] = true;
    mp["AGC"] = true;
    mp["AHC"] = true;
    int n = 3;
    while (n--) {
        string s; cin >> s;
        mp[s] = false;
    }
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second == true) {
            cout << it->first;
            return;
        }
    }
}

int main()
{
    solve();
	return 0;
}