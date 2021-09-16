#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((6*a)>=b && a<=b) cout << "Yes";
    else cout << "No";
}
int main()
{
    solve(); 
    return 0;
}
