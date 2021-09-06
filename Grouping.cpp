#include <iostream>
using namespace std;

int main() {
    int g[] = { 0,1,2,1,4,1,4,1,1,4,1,4,1 };
    int x, y;
    cin >> x >> y;

    if (g[x] == g[y])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}