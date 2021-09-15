#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    arr[2] - arr[1] == arr[1] - arr[0] ? cout << "Yes" : cout << "No";
}
int main()
{
    solve(); 
    return 0;
}