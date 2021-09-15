#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == '7' || s[1] == '7' || s[2] == '7') cout << "Yes";
    else cout << "No";
    return 0;
}
