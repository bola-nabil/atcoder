#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) >= 15 && b >= 8) cout << 1;
    else if ((a + b) >= 10 && b >= 3) cout << 2;
    else if ((a + b) >= 3 && b < 8 || (a + b) >= 3 && b < 3) cout << 3;
    else if((a+b)<3) cout << 4;
}
int main()
{
    solve();
    return 0;
}
