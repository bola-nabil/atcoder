#include <iostream>
using namespace std;

void solve()
{
    long long n, count = 0;
    cin >> n;
    for (long long a = 1; a <= n; a++)
    {
        for (long long b = 1; b <= n; b++)
        {
            if ((a * b) >= n)
                break;
            count++;
        }
    }
    cout << count;
}
int main()
{
    solve();
    return 0;
}