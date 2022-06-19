// bola nabil

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	int n, k, a, res;
	cin >> n >> k >> a;
	res = (k + a - 1) % n;
	if (res == 0)
		cout << n;
	else
		cout << res;
}

int main()
{
	solve();
	return 0;
}
