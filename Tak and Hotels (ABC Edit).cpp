#include <iostream>
using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int sub = (n - k);
    int mul1 = k * x;
    int mul2 = sub * y;

    if (n > k)
        cout << mul1 + mul2 << endl;
    else
        cout << (n*x) << endl;
    return 0;
}