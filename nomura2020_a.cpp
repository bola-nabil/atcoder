// bola nabil

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll h1, m1, h2, m2, k;
	cin >> h1 >> m1 >> h2 >> m2 >> k;

	ll time1, time2;
	time1 = h1 * 60 + m1;
	time2 = h2 * 60 + m2;
	time2 -= k;
	if (time2 <= time1)
	{
		cout << "0";
		return;
	}
	else
		cout << (time2 - time1);
}

int main()
{
	solve();
	return 0;
}
