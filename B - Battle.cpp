#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((c + b - 1) / b <= (a + d - 1) / d)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    solve();
    return 0;
}