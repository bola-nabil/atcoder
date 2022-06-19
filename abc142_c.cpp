// bola nabil

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		v.push_back({ x, i });
	}
	sort(v.begin(), v.end());
	for (auto it : v)
		cout << it.second << " ";
}

int main()
{
	solve();
	return 0;
}
