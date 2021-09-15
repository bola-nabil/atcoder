#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s == "RRR") cout << 3;
    else if (s == "RRS" || s == "SRR") cout << 2;
    else if (s == "RSR" || s == "SRS" || s == "RSS" || s == "SSR") cout << 1;
    else cout << 0;
    return 0;
}
