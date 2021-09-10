#include <iostream>
using namespace std;

int main()
{
    int a, b,count=0;
    cin >> a >> b;
    count += max(a, b);

    if (a >= b) a--;
    else b--;
    count += max(a, b);

    cout << count << endl;
    return 0;
}