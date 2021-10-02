#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    long long n, d, x, y, sum = 0,count=0;
    cin >> n >> d;
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        sum = pow(x, 2) + pow(y, 2);
        if (sum <= pow(d,2))
            count++;
    }
    cout << count;
}
int main()
{
    solve();
    return 0;
}