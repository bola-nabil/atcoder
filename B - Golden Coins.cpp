#include <iostream>
using namespace std;

void solve()
{
	int n, k, m, l;
	cin >> n;
	k = n / 500;
	m = n - (k * 500);
	l = m / 5;
	cout << (k * 1000) + (l * 5);
}

int main()
{
	solve();
	return 0;
}