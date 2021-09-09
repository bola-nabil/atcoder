#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int t1 = (a * b) - a;
    int res = (t1 - b) + 1;

    cout << res << endl;
    return 0;
}