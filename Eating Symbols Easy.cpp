#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
            res++;
        if (s[i] == '-')
            res--;
    }
    cout << res << endl;
    return 0;
}