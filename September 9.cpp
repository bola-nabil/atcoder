#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int f = n;
    while (f >= 10)
        f /= 10;
    int l = n % 10;

    if (f == 9 || l == 9)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}