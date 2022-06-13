//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, count = 0, sum = 0;;
	cin >> n >> m;
	int* a = new int[n];

	float mx = m * 4;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	double vx = sum / mx;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= vx)
			count++;
	}
	if (count >= m)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}