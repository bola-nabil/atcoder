#include <iostream>
using namespace std;

void solve()
{
	long long n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		if (n % 200 == 0)
			 n /= 200;
		else
		{
			n *= 1000;
			n += 200;
		}
	}
	cout << n;
}

int main()
{
    solve();
	return 0;
}
