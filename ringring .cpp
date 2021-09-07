#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int t1 = (a + b), t2 = (a + c), t3 = (b + c);
    int res = min({ t1,t2,t3 });

    cout << res << endl;
    return 0;
}