#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    cin >> a1>> a2>> a3;
    int sum = (a1 + a2 + a3);

    if (sum >= 22) cout << "bust";
    else cout << "win";
    return 0;
}