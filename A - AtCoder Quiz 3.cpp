#include <iostream>
using namespace std;

int digit(int n) {
	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}
	return count;
}
void solve()
{
	int n;
	cin >> n;
	int d1 = digit(n);
	int r = n + 1;
	if (n < 42) {
		if (d1 == 1) cout << "AGC00" << n;
		else cout << "AGC0" << n;
	}
	else {
		 cout << "AGC0" << r;
	}
}

int main()
{
	solve();
	return 0;
}