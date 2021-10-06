#include <iostream>
using namespace std;

void solve()
{
    long long x,coin = 100;
    cin >> x;

    for (int i = 0; ; i++)
    {
        coin = (coin + coin / 100);
        if (coin >= x) {
            cout << (i + 1);
            break;
        }
    }
}
int main()
{
    solve();
    return 0;
}