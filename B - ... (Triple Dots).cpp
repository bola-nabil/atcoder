#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int k; cin >> k;
    string s; cin >> s;
    int len = s.length();
    
    if (len > k) {
        for (int i = 0; i < k; i++) {
            cout << s[i];
        }
        cout << "...";
    }
    else
        cout << s;
}
int main()
{
    solve();
    return 0;
}