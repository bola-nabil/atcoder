#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << "Draw" << endl;
    else if (a == 1 || a > b && b!=1)
        cout << "Alice" << endl;
    else if (b == 1 || b > a && a!=1)
        cout << "Bob" << endl;
    return 0;
}