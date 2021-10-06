#include <iostream>
using namespace std;

void solve()
{
    long long int a, b, c, k;
    cin >> a >> b >> c >> k;

    if (k <= (a + b))
        cout << min(a, k);
    else {
        k -= (a + b);
        cout << (a + k * -1);
    }
}
int main()
{
    solve();
    return 0;
}