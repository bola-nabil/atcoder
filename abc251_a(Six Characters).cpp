//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	if (s.length() == 3)
		cout << s << s;
	else if (s.length() == 2)
		cout << s << s << s;
	else if (s.length() == 1)
		cout << s << s << s << s << s << s;
	return 0;
}