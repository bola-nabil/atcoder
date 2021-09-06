#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int a1 = (a * b);
    int a2 = (c * d);
    cout << max(a1, a2) << endl;
    return 0;
}