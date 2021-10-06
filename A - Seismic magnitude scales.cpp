#include <iostream>
#include <cmath>
using namespace std;
 
void solve()
{
    long long int a, b, res;
    cin >> a >> b;
    res = pow(32, a) / pow(32, b);
    cout << res;
}
int main()
{
    solve();
    return 0;
}