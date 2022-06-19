// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;
	if (a == 1 && b == 2 || a == 2 && b == 1)
		cout << (a + b);
	else
		cout << abs(a - b);
}

int main()
{
	solve();
	return 0;
}
