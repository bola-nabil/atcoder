#include <iostream>
using namespace std;

void solve()
{
    int m, h;
    cin >> m >> h;
    if (h % m == 0) cout << "Yes";
    else cout << "No";
}
int main()
{
    solve();
    return 0;
}