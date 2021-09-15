#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int m_n = min(x, y), mx = max(x, y);
    if ((m_n + 3) > mx) cout << "Yes";
    else cout << "No";
}
int main()
{
    solve();
    return 0;
}
