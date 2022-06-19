// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	map<pair<string, string>, int>mp;
	string *s = new string[n];
	string* t = new string[n];

	for (int i = 0; i < n; i++)
	{
		cin >> s[i] >> t[i];
		mp.insert({ make_pair(s[i],t[i]),0 });
	}
	pair<string, string>count;
	bool check = false;
	for (int i = 0; i < n; i++)
	{
		count = make_pair(s[i], t[i]);
		mp[count]++;
		if (mp[count] > 1)
			check = true;
	}
	if (check)
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	solve();
	return 0;
}
