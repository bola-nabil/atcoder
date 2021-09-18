#include <iostream>
using namespace std;

void solve()
{
	string x;
	cin >> x;
	if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) 
		cout << "Weak" << endl;
	else if (
		((x[0] - '0') + 1) % 10 == x[1] - '0' &&
		((x[1] - '0') + 1) % 10 == x[2] - '0' &&
		((x[2] - '0') + 1) % 10 == x[3] - '0'
		) {
		cout << "Weak" << endl;
	}
	else 
		cout << "Strong" << endl;
}

int main()
{
    solve();
	return 0;
}
