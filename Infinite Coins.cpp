#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    int t1 = (n / 500);
    int t2 = t1 * 500;

    if (t2 + a >= n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}