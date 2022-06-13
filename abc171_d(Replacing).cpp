//bola nabil

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 10;
int mm[MAX];

int main()
{
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		mm[x]++;
		sum += x;
	}
	int y;
	cin >> y;
	while (y--)
	{
		int a, b;
		cin >> a >> b;
		int s = b - a;
		mm[b] += mm[a];
		sum += (mm[a] * s);
		mm[a] = 0;
		cout << sum << endl;
	}
	return 0;
}