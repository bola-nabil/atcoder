#include <iostream>
using namespace std;

void solve()
{
	int n, m, sum = 0;
	cin >> n >> m;
	int* a = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if ((sum > n))
		cout << -1;
	else
		cout << (n - sum);
}

int main()
{
	solve();
	return 0;
}