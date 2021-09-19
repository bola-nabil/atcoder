#include <iostream>
using namespace std;

void solve()
{
	int x;
	cin >> x;
	if (x >= 0 && x < 40)
		cout << (40 - x);
	else if (x >= 40 && x < 70)
		cout << (70 - x);
	else if (x >= 70 && x < 90)
		cout << (90 - x);
	else if (x >= 90)
		cout << "expert";
}

int main()
{
    solve();
	return 0;
}
