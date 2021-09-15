#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int res = 1.08 * n;
    if (res < 206) cout << "Yay!";
    else if (res > 206) cout << ":(";
    else cout << "so-so";
}
int main()
{
    solve(); 
    return 0;
}
