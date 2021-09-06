#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    char fb = b.at(0);
    char fc = c.at(0);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    char la = (a.at(0));
    char lb = (b.at(0));

    if (la == fb && lb == fc)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}