// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, res;
	cin >> a >> b;
	res = max(a, b) - min(a, b);
	long long sol =  pow(32, res);
	cout << sol;
}

int main()
{
	solve();
	return 0;
}
