#include <iostream>
#include <cmath>
using namespace std;

int convertBinaryToDecimal(long long n, int x)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(x, i);
		++i;
	}
	return decimalNumber;
}

void solve()
{
	long long a, b, x;
	cin >> x >> a >> b;
	long long r1 = convertBinaryToDecimal(a, x);
	long long r2 = convertBinaryToDecimal(b, x);
	cout << (r1 * r2);
}

int main()
{ 
    solve();
	return 0;
}
