#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int r = abs(a - b);

    if ((c - r) < 0) cout << 0;
    else cout << (c - r);
    return 0;
}