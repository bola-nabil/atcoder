#include <iostream>
using namespace std;

void solve()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string t; cin >> t;
	for (int i = 0; i < t.length(); i++)
	{
		if (t[i] == '1') cout << s1;
		if (t[i] == '2') cout << s2;
		if (t[i] == '3') cout << s3;
	}
}

int main()
{
    solve();
	return 0;
}
