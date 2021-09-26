#include <iostream>
using namespace std;

void solve()
{
	int n,count = 0;
	long long s, d;
	cin >> n >> s >> d;
	long long* x = new long long[n];
	long long* y = new long long[n];

	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (s > x[i] && y[i] > d)
			count++;
	}
	if (count == 0)
		cout << "No";
	else
		cout << "Yes";
}

int main()
{ 
    solve();
	return 0;
}
