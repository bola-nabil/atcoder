#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;

    map<char, int> s_map;
    for (int i = 0; i < 4; i++)
        s_map[s[i]] += 1;
    string ans = "Yes";
    for (pair<char, int> p : s_map)
        if (p.second != 2) ans = "No";
    cout << ans << endl;
    return 0;
}