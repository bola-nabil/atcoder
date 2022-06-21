// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	long long count = 0;

	for (int i = 1; i < n; i++)
	{
		count += max(0, arr[i - 1] - arr[i]);
		arr[i] += max(0, arr[i - 1] - arr[i]);
	}
	cout << count;
}

int main()
{
	solve();
	return 0;
}
