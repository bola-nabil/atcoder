#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else if (b == c) cout << a;
    else cout << 0;
}
int main()
{
    solve(); 
    return 0;
}