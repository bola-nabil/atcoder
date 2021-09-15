#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char ch1 = s[0], ch2 = s[1], ch3 = s[2];
    if (ch1 == ch2 && ch1 == ch3) cout << "Won";
    else cout << "Lost";
}
int main()
{
    solve();
    return 0;
}
