#include <iostream>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    cout << (100 - x % 100);
}
int main()
{
    solve();
    return 0;
}
