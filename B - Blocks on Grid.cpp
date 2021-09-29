#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
	int h, w;
	cin >> h >> w;
	int arr[h][w];
	vector<int>v;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> arr[i][j];
			v.push_back(arr[i][j]);
		}
	}
	int a = *min_element(v.begin(), v.end());
	int count = 0;
	for (int i = 0; i < v.size(); i++)
		count += v[i] - a;
	cout << count;
}

int main()
{
	solve();
	return 0;
}
