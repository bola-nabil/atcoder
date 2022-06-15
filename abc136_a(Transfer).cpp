// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c, x, res;
	cin >> a >> b >> c;
	x = (a - b);
	res = c - x;

	if (res < 0) cout << "0";
	else cout << res;
}

int main()
{
	solve();
	return 0;
}
