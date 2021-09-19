#include <iostream>
using namespace std;

void solve()
{
	int n,total=0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 10)
			total += arr[i] - 10;
	}
	cout << total;
}

int main()
{
    solve();
	return 0;
}
