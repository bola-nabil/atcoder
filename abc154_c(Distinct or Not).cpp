// bola nabil

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	ll n, i, a;
	cin >> n;
	vector<ll> v;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1])
		{
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main()
{
	solve();
	return 0;
}
