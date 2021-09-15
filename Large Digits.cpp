#include <iostream>
using namespace std;

int sum_d(int n)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(sum_d(a), sum_d(b));
    return 0;
}
