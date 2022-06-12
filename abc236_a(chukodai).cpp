//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x, y;
	cin >> x >> y;

	swap(s[y-1], s[x-1]);

	cout << s;
	
	return 0;
}