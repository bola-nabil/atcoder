//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long  n, x;
	cin >> n;

	x = pow(2, n);
	if (n >= 10) cout << "Yes";

	else {
		if (x > (n * n)) cout << "Yes";
		else cout << "No";
	}
	return 0;
}