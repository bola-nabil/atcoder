//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, p,x,res;
	cin >> a >> p;
	x = (a - p) / 2;
	res = (a + p) + x;

	if (a == 0) cout << "0";
	else cout << res;
	return 0;
}