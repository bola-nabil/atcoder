#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int l = n % 10;
    int f = n;

    while (f >= 10)
    {
        f/= 10;
    }
  
    if (f == l)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}