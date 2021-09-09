#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int r1 = (a * b * 1), r2 = (a * b * 2), r3 = (a * b * 3);

    if ((r1 % 2 == 1) || (r2 % 2 == 1) || (r3 % 2 == 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}