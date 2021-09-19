#include <iostream>
using namespace std;

void solve()
{
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long int  x = a, y = 0;
	for (int i = 1; i <=a; i++)
	{
	    x += b;
		y += c;
		long long int  z = d * y;
		if (z >= x)
		{
			cout << i;
			return;
		}
	}
	cout << -1;
}

int main()
{
    solve();
	return 0;
}
