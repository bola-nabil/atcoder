#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = (a + b), s2 = (b + c), s3 = (a + c);
    cout << max({ s1,s2,s3 });
}
int main()
{
    solve(); 
    return 0;
}
