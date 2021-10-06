#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    long long int n,mul=1;
    cin >> n;
    long long int* a = new long long int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cout << 0;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= 1000000000000000000 / mul)
            mul *= a[i];
        else {
            cout << -1;
            return;
        }
    }
    cout << mul;
}
int main()
{
    solve();
    return 0;
}