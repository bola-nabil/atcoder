// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, sum = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= x; k++)
            {
                sum += __gcd(i, __gcd(j, k));
            }
        }
    }
    cout << sum;
}

int main()
{
	solve();
	return 0;
}
