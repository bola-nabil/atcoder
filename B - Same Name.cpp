#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        s.insert(x + " " + y);
    }
    if (s.size() == n) cout << "No";
    else cout << "Yes";
}
int main()
{
    solve(); 
    return 0;
}
