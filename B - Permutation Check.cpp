#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x--;
        a[x]++;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    solve();
	return 0;
}
