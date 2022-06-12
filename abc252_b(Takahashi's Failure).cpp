//bola nabil

#include <bits/stdc++.h>
using namespace std;
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
#define BIG_NUM 2000000000

#define SIZE 105

int a[SIZE];
bool check[SIZE];

int main()
{
	int n, k;
	cin >> n >> k;

	int maxi = -BIG_NUM;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		chmax(maxi, a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == maxi)
			check[i + 1] = true;
	}
	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (check[tmp]) {
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
	return 0;
}