#include <iostream>
using namespace std;

void solve()
{
	int n, v[105], sav;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    int count = 0;
    for (int k = 2; k <= 1000; k++) {
        int nr = 0;
        for (int i = 1; i <= n; i++) {
            if (v[i] % k == 0) {
                nr++;
            }
        }
        if (nr > count) {
            count = nr;
            sav = k;
        }
    }
    cout << sav;
}

int main()
{
	solve();
	return 0;
}
