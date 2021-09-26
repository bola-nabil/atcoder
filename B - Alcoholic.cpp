#include <iostream>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int c = 0;
    int c1 = -1;
    for (int i = 0; i < n; i++) {
        int v, p;
        cin >> v >> p;
        double m = v * p;
        c += m;
        if (c > x * 100) {
            c1 = i + 1;
            break;
        }
    }
    cout << c1;
}

int main()
{ 
    solve();
	return 0;
}
