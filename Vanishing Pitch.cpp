#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float x = static_cast<float>(d) / a;
    if (x >= b && x <= c)
        cout << "No";
    else cout << "Yes";
}
int main()
{
    solve();
    return 0;
}
