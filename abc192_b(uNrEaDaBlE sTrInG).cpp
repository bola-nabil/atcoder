// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s,res="Yes";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0 && 'A' <= s[i] && s[i]<='Z' || i % 2 == 1 && 'a' <= s[i] && s[i] <= 'z') {
			res = "No";
			break;
		}
	}
	cout << res;
}

int main()
{
	solve();
	return 0;
}
