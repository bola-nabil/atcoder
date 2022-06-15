// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, a, b, count = 0;
	cin >> n >> a >> b;
	count += n / (a + b) * a;
	n %= (a + b);
	if (n < a) count += n;
	else count += a;
	cout << count;
}

int main()
{
	solve();
	return 0;
}
