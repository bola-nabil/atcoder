// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;

	if (s[0] == s[1] && s[1] == s[2])
		cout << "1";
	else if (s[0] != s[1] && s[0] != s[2] && s[1] !=s[2])
		cout << "6";
	else
		cout << "3";
}

int main()
{
	solve();
	return 0;
}
