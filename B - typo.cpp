#include <iostream>
#include <algorithm>
using namespace std;
 
void solve()
{
    string s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i]) {
            swap(t[i], t[i + 1]);
              count++;
        }
    }
    if (count <= 1)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    solve();
    return 0;
}