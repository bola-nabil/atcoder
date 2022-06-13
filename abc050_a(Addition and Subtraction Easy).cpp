//bola nabil

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	string op;
	cin >> a >> op >> b;

	if (op == "+")
		cout << (a + b);
	else
		cout << (a - b);
	return 0;
}