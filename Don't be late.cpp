#include <iostream>
using namespace std;

int main()
{
    int d, t, s;
    cin >> d >> t >> s;
    int res = (s*t);

    if (res>= d) cout << "Yes";
    else cout << "No";
    return 0;
}
