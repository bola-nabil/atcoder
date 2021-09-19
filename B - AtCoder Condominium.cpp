#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            count += 100 * i + j;
        }
    }
    cout << count;
}

int main()
{
    solve();
	return 0;
}
