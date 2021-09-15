#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = pow(a, 2) + pow(b, 2);
    if (sum < pow(c, 2)) cout << "Yes";
    else cout << "No";
}
int main()
{
    solve(); 
    return 0;
}