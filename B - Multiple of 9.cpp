#include <iostream>
using namespace std;

int sum_d(string  n)
{
    int sum = 0;
    for (int i = 0; i < n.size(); i++) {
        int d = n[i] - '0';
        sum += d;
    }
    return sum;
}
void solve()
{
    string n;
    cin >> n;

    if (sum_d(n) % 9 == 0)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    solve();
    return 0;
}