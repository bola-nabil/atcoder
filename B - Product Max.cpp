#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int x1, x2, y1, y2;
    x1 = (a * c); x2 = (a * d);
    y1 = (b * c); y2 = (b * d);

    cout << max({ x1,x2,y1,y2 });
}
int main()
{
    solve();
    return 0;
}