#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool Palindrome(string s) {
	string rs = s;
	reverse(s.begin(), s.end());
	return rs == s;
}
void solve()
{
	long long int n;
	cin >> n;
	if (n == 0) {
		cout << "Yes";
		return;
	}
	while (1) {
		int x = n % 10;
		if (x == 0) n /= 10;
		else break;
	}
	if (Palindrome(to_string(n))) cout << "Yes";
	else cout << "No";
}

int main()
{
    solve();
	return 0;
}
