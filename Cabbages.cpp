#include <iostream>
using namespace std;

void solve()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    int r1 = (a * x), r2 = abs(n - a), res = r1 + (r2 * y);
    if (n <= a) cout << n * x;
    else cout << res;
}
int main()
{
    solve(); 
    return 0;
}
