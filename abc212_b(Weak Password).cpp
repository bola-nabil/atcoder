//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;

	if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3])
	{
		cout << "Weak";
		return 0;
	}
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == '9' && s[i + 1] == '0')
			count++;
		else if (s[i] == s[i + 1] - 1)
			count++;
	}
	if (count == 3) cout << "Weak";
	else cout << "Strong";
	return 0;
}