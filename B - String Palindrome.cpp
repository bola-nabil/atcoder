#include <iostream>
#include <string>
using namespace std;

void solve()
{
	string s,s1,s2;
	cin >> s;
	int size = s.size();
	s1 = s.substr(0, (size - 1) / 2);
	s2 = s.substr((size + 2) / 2, size);
	if (s1 == s2)
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	solve();
	return 0;
}