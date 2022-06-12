//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, d = 100;
	int i;
	cin >> a;
	for (i = 1;; i++)
	{
		d = d + (d / 100);
		b = d;
		if (b >= a) break;
	}
	cout << i;
	return 0;
}