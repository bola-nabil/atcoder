#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int add = (a + b), sub = (a - b), mul = (a * b);
    int res = max({ add,sub,mul });

    cout << res << endl;
    return 0;
}