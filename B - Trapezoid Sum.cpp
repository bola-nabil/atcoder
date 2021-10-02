#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long res = 0;
    auto calc = [&](long long x) {
        return x * (x + 1) / 2;
    };
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        res += calc(b) - calc(a - 1);
    }
    cout << res;

}

int main()
{
	solve();
	return 0;
}
