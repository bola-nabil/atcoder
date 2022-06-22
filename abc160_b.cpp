// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, a, x = 0;
	cin >> n;
	a = n / 500;
	x = 1000 * a;
	n = n - a * 500;
	x = x + n / 5 * 5;
	cout << x;
}

int main()
{
	solve();
	return 0;
}
