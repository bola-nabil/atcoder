// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;
	if (a > 9 || b > 9)
		cout << "-1";
	else
		cout << (a * b);
}

int main()
{
	solve();
	return 0;
}
