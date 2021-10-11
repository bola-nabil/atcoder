#include <iostream>
using namespace std;

void solve()
{
	int n, m, sum = 0;
	cin >> n >> m;
	int* a = new int[n];
	int res = m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	float threshold = sum * 1. / (4. * float(m));
	for (int i = 0; i < n; i++) {
		if (a[i] >= threshold)
			res--;
	}
	if (res <= 0)
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	solve();
	return 0;
}