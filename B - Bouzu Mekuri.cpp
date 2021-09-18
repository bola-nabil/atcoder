#include <iostream>
#include <set>
using namespace std;

void solve()
{
	int n,i = 0;
	cin >> n;
	char* ch = new char[n];
	for (i = 0; i < n; i++) cin >> ch[i];
	for (i = 0; i < n; i++)
	{
		if (ch[i] == '1')
		{
			i++;
			break;
		}
	}
	if (i % 2 == 1) cout << "Takahashi";
	else cout << "Aoki";
}

int main()
{
    solve();
	return 0;
}
