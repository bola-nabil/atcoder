#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = max(a, b);
    int y = min(c, d);
    cout << x - y;
}
int main()
{
    solve(); 
    return 0;
}