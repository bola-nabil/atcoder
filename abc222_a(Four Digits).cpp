// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;

	if (s.length() == 3)
		cout << "0" << s;
	else if (s.length() == 2)
		cout << "00" << s;
	else if (s.length() == 1)
		cout << "000" << s;
	else
		cout << s;
}

int main()
{
	solve();
	return 0;
}
