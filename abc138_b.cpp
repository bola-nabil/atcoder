// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;

	double a, sum = 0.0;

	while(n--) {
		cin >> a;
		sum += 1 / a;
	}

	cout << setprecision(16) << 1 / sum;

}

int main()
{
	solve();
	return 0;
}
