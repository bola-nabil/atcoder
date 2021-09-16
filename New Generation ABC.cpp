#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 125) cout << 4;
    else if (n >= 126 && n <= 211) cout << 6;
    else cout << 8;
}
int main()
{
    solve(); 
    return 0;
}
