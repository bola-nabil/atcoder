#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    float c = static_cast<float>((a - b)) / a;
    cout << 100 * c;
}
int main()
{
    solve();
    return 0;
}
