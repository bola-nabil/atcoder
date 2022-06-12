//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	if (s.length() <= 2)
		cout << s;
	else
		cout << s[1] << s[2];
	return 0;
}