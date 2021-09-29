#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calcslope(double x, double y, double a, double b)
{
	return (b - y) / (a - x);
}

void solve()
{
	int n;
	cin >> n;
	vector<pair<double, double>> a(n);
	for (pair<double, double>& x : a)
		cin>>x.first>> x.second;

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double res = calcslope(a[i].first, a[i].second, a[j].first, a[j].second);
			if (res <= 1 and res >= -1)
				count++;
		}
	}
	cout << count;
}

int main()
{
	solve();
	return 0;
}
