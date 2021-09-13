#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    int res = 100 * (10 - n) + r;

    if (n <= 10) cout << res;
    else cout << r;
    return 0;
}
