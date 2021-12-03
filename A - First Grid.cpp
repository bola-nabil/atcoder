#include <iostream>
#include <string>
using namespace std;

void solve() {

	string s1, s2;
	cin >> s1 >> s2;
	int count = 0;
	for (int i = 0; i < 2; i++)
		if (s1[i] == '#') count++;
	for (int i = 0; i < 2; i++)
		if (s2[i] == '#') count++;
	if (count > 2) {
		cout << "Yes";
		return;
	}
	if ((s1[0] == '#' && s2[1] == '#') || (s1[1] == '#' && s2[0] == '#'))
		cout << "No";
	else
		cout << "Yes";
}

int main()
{
	solve();
	return 0;
}