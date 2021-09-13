#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int count = 0;
    if (s[0] == t[0]) count += 1;
    if (s[1] == t[1]) count += 1;
    if (s[2] == t[2]) count += 1;
    cout << count << endl;
    return 0;
}