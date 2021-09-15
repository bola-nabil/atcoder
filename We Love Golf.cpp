#include <iostream>
using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    bool count = false;
    for (int i = a; i <= b; i++)
    {
        if (i % k == 0)
            count = true;
    }

    cout << (count ? "OK" : "NG");
    return 0;
}
