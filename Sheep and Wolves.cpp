#include <iostream>
using namespace std;

int main()
{
    int s, w;
    cin >> s >> w;

    if (w >= s) cout << "unsafe";
    else cout << "safe";
    return 0;
}
