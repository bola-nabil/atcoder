#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            count++;
    }
    cout << (float) count / n;
    return 0;
}