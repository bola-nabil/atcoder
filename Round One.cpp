#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (abs(a - b) != a && abs(a - b) != b) cout << abs(a - b);
    else cout << (a + b);
    return 0;
}