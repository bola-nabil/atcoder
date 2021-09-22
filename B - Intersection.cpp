#include <iostream>
using namespace std;

void solve()
{
    int n;
    int a_max = -1, b_min = 10000;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a > a_max) a_max = a;
    }
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        if (b < b_min) b_min = b;
    }
    int ans = b_min - a_max + 1;
    if (ans < 0) ans = 0;
    cout << ans << endl;
}

int main()
{
    solve();
	return 0;
}
