#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    float sum = a + b;
    float av = sum / 2;

    cout << round(av) << endl;
    return 0;
}