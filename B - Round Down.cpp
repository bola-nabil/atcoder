#include <iostream>
#include <string>
using namespace std;

void solve()
{
	string s,count;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
			break;
		else
			count += s[i];
	}
	cout << count;
}

int main()
{
    solve();
	return 0;
}
