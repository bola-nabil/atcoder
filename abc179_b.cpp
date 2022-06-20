// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, a, b, count = 0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		if (a == b) count++;
		else count = 0;
		if (count == 3) break;
	}
	if (count == 3) cout << "Yes";
	else cout << "No";
}

int main()
{
	solve();
	return 0;
}
