#include <iostream>
using namespace std;
 
void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	int i = 0;
	for (i = a; i <= b; i++)
	{
		if (i % c == 0) {
			cout << i;
			return;
		}
	}
	cout << -1;
}
 
int main()
{ 
    solve();
	return 0;
}