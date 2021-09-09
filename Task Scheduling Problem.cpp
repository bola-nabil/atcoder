#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << abs(a[2] - a[1]) + abs(a[1] - a[0]) << endl;
    return 0;
}