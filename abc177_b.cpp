// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;

    cin >> s >> t;

    int ls = s.size();
    int lt = t.size();
    int cnt = 0;

    int val = 10000000;

    for (int i = 0; (i + lt) <= ls; i++) {
        for (int j = 0; j < lt; j++) {
            if (s[i + j] == t[j]) {
                continue;
            }
            else {
                cnt++;
            }

        }

        val = min(val, cnt);
        cnt = 0;
    }

    cout << val << endl;
}

int main()
{
	solve();
	return 0;
}
