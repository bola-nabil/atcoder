#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch == 'T') cout << 'A' << endl;
    else if (ch == 'A') cout << 'T' << endl;
    else if (ch == 'G') cout << 'C' << endl;
    else cout << 'G' << endl;
    return 0;
}