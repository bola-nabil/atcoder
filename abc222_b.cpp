// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, p; cin >> n >> p;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < p)
			count++;
	}
	cout << count;
}

int main()
{
	solve();
	return 0;
}
