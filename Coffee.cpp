#include <iostream>
using namespace std;

int main()
{
    char* s = new char[6];
    string ss;
    for (int i = 1; i <= 6; i++)
        cin >> s[i];

    for (int i = 1; i <= 6; i++) {
        if (s[3] == s[4] && s[5] == s[6]) ss = "Yes";
        else ss = "No";
    }
    cout << ss;
    return 0;
}
