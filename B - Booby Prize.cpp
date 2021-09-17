#include <iostream>
using namespace std;

int secondLargest(long long* arr, int n) {
    int largest = 0, secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}
void solve()
{
    int n,k=0;
    cin >> n;
    long long* a = new long long[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long x =  secondLargest(a, n);
    cout << x + 1;
}

int main()
{
    solve();
	return 0;
}
