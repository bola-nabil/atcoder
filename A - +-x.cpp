#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = (a + b), sub = (a - b), mul(a * b);
    int res = max({ sum,sub,mul });

    cout << res;
    return 0;
}