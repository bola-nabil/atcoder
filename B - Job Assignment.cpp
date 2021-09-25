#include <iostream>
using namespace std;

void solve()
{
		int N;
		int a[1010], b[1010];
		int i, j, z = 0, min = 300000;
		cin >> N;

		for (i = 0; i < N; i++)
			cin >> a[i] >> b[i];

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (i == j)
					z = a[i] + b[j];
				else
				{
					if (a[i] > b[j])
						z = a[i];
					else
						z = b[j];
				}

				if (z < min)
					min = z;
			}
		}
		cout << min;
}

int main()
{
    solve();
	return 0;
}
