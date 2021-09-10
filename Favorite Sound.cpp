#include <iostream>
using namespace std;

int main()
{
    int a, b, c,div;
    cin >> a >> b >> c;
    div = (b / a);

    cout << min(div, c) << endl;
    return 0;
}