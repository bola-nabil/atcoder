#include <iostream>
using namespace std;

void solve()
{
	int n, k, a;
	cin >> n >> k >> a;

	int sum = k + a - 1;
	if (sum % n == 0)
		cout << n;
	else
		cout << (sum % n);
}

int main()
{
	solve();
	return 0;
}