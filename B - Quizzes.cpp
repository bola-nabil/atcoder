#include <iostream>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    int m = s.size();
    for (int i = 0; i < m; i++) {
        if (s.at(i) == 'o') {
            x++;
        }
        if (s.at(i) == 'x') {
            if (x > 0) {
                x--;
                if (x < 0) {
                    x = 0;
                }
            }
        }
    }
    cout << x << endl;
}

int main()
{
	solve();
	return 0;
}
