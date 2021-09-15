#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int res = (7-a) + (7-b) + (7-c);
    cout << res;
}
int main()
{
    solve(); 
    return 0;
}