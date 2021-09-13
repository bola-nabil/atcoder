#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == 'S') cout << "Cloudy";
    else if (s[0] == 'C') cout << "Rainy";
    else cout << "Sunny";
    return 0;
}