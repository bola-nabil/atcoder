#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int left = (a + b);
    int right = (c + d);

    if (left > right)
        cout << "Left" << endl;
    else if (right > left)
        cout << "Right" << endl;
    else
        cout << "Balanced" << endl;
    return 0;
}