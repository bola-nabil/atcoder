#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 1 && n <= 999)
        cout << "ABC" << endl;
    else
        cout << "ABD" << endl;
    return 0;
}