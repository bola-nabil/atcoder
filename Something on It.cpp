#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'o')
            count++;
    }
    cout << 700 + (100 * count) << endl;
    return 0;
}