#include <iostream>
using namespace std;

void solve()
{
	long long n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			0;
		else
			sum += i;
	}
	cout << sum;
}

int main()
{
	solve();
	return 0;
}