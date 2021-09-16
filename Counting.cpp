#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << abs(a - b) + 1;
    else cout << 0;
}
int main()
{
    solve(); 
    return 0;
}
