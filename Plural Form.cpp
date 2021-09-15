#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.back() == 's') cout << s << "es";
    else cout << s << "s";
    return 0;
}
