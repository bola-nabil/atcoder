#include <iostream>
using namespace std;

void solve()
{
	int n;;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += (a[i] * b[i]);
	if (sum)
		cout << "No";
	else 
		cout << "Yes";
}

int main()
{ 
    solve();
	return 0;
}
