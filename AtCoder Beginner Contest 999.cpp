#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == '9') cout << "1";
    else if (s[0] == '1') cout << "9";

    if (s[1] == '9') cout << "1";
    else if (s[1] == '1') cout << "9";

    if (s[2] == '9') cout << "1";
    else if (s[2] == '1') cout << "9";
    cout << endl;
    return 0;
}