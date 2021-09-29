#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<ll> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll count = 0, sub = 0;
	for (int i = 0; i < n; i++)
	{
		count += (ll)i * v[i] - sub;
		sub += v[i];
	}
	cout << count;
}

int main()
{
	solve();
	return 0;
}
