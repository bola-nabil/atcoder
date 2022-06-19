// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	set<char>ch;
	bool dis = true, low = false, upp = false;
	for (auto c : s)
	{
		if (ch.find(c) != ch.end())
			dis = false;
		if ('a' <= c && c <= 'z')
			low = true;
		if ('A' <= c && c <= 'Z')
			upp = true;
		ch.insert(c);
	}
	if (dis && low && upp)
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	solve();
	return 0;
}
