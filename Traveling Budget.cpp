#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min_train = min(a, b);
    int min_bus = min(c, d);

    cout << (min_train + min_bus) << endl;
    return 0;
}