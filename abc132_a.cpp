// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin >> s;

	sort(s.begin(), s.end());
	if (s[0] == s[1] && s[0] == s[2] && s[0] == s[3])
		cout << "No";
	else if (s[0] == s[1] && s[2] == s[3])
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	solve();
	return 0;
}
