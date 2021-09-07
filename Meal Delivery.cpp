#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;
    int t1 = abs(x - a);
    int t2 = abs(x - b);

    if (t1 < t2)
        cout << "A" << endl;
    else
        cout << "B" << endl;
    return 0;
}