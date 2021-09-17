#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int k = -1;
    string s;
    cin >> s >> k;
    sort(s.begin(), s.end());
    while (k > 1)
    {
        next_permutation(s.begin(), s.end());
        k--;
    }
    cout << s;
}
int main()
{
    solve(); 
    return 0;
}
