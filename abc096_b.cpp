// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c, k, r1, r2, sum = 0;
	cin >> a >> b >> c >> k;
	sum = a + b + c;
	r1 = max(a, b);
	r2 = max(r1, c);
	sum -= r2;
	while (k--)
		r2 *= 2;
	sum += r2;
	cout << sum;
}

int main()
{
	solve();
	return 0;
}
