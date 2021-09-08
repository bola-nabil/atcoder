#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}