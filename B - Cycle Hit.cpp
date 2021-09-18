#include <iostream>
#include <set>
using namespace std;

void solve()
{
	set<string>s;
	for (int i = 0; i < 4; i++)
	{
		string x; cin >> x;
		s.insert(x);
	}
	if (s.size() == 4)
		cout << "Yes";
	else cout << "No";
}

int main()
{
    solve();
	return 0;
}
