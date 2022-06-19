// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int* arr = new int[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != i)
		{
			int temp = arr[i];
			arr[i] = arr[temp];
			arr[temp] = temp;
			break;
		}
	}
	bool check = true;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != i)
		{
			check = false;
			break;
		}
	}
	if (check) cout << "YES";
	else cout << "NO";
}

int main()
{
	solve();
	return 0;
}
