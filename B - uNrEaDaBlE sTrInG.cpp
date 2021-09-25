#include <iostream>
using namespace std;

void solve()
{
	string s,k;
	cin >> s;
	k = s;
	for (int i = 0; i < s.length(); i++)
	{
		if (i % 2 == 0)
			k[i] = tolower(k[i]);

		if (i % 2 == 1)
			k[i] = toupper(k[i]);
	}
	if (s == k)
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
    solve();
	return 0;
}
