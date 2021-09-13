#include <iostream>
using namespace std;

int main()
{
    int a, b, t,count=0;
    cin >> a >> b >> t;

    for (int i = 1; i <= t; i++)
    {
        if (i % a == 0)
            count += b;
    }
    cout << count << endl;
    return 0;
} 