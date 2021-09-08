#include <iostream>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    int after_cake = x - a;
    cout << after_cake%b << endl;
    return 0;
}