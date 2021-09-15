#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    char cr = toupper(ch);

    if (ch == cr) cout << "A";
    else cout << "a";
    return 0;
}
