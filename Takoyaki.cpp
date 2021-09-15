#include <iostream>
using namespace std;

int main()
{
    int n, x, t,count = 0;
    cin >> n >> x >> t;

    while (n>0)
    {
        n -= x;
        count += t;
    }

    if (n == 0) cout << count;
    else cout << count;
    return 0;
}
