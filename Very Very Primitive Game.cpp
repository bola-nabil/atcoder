#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && c == 0) cout << "Aoki";
    else if (a == b && c == 1) cout << "Takahashi";
    else if (a > b) cout << "Takahashi";
    else if(b>a) cout << "Aoki";
}
int main()
{
    solve();
    return 0;
}
