#include <iostream>
using namespace std;

void solve()
{
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1000;
	int min = (w + b - 1) / b, max = w / a;
	if (min > max)
	{
		cout << "UNSATISFIABLE";
		return;
	}
	cout << min << " " << max;
}

int main()
{
    solve();
	return 0;
}
