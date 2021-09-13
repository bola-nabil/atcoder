#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int p, q, r;
	cin >> p >> q >> r;
	int t1 = (p + q), t2 = (p + r), t3 = (q + r);

	cout << min({ t1,t2,t3 });
	return 0;
}