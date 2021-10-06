#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < k; i++) {
        int d;
        cin >> d;
        for (int i = 0; i < d; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }
    }
    cout << n - s.size();
}
int main()
{
    solve();
    return 0;
}