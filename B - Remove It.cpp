#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	long long x;
	cin >> x;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			continue;
		else
			cout << arr[i] << " ";
	}
}

int main()
{
    solve();
	return 0;
}
