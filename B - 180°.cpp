#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '9') s[i] =  '6';
        else if (s[i] == '6') s[i] =  '9';
        cout << s[i];
    }
}

int main()
{
    solve();
	return 0;
}
