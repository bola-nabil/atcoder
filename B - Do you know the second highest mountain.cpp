#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
	int N; cin >> N;
	vector<pair<int, string>> M(N);
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		int t; cin >> t;
		M[i] = make_pair(t, s);
	}
	sort(M.begin(), M.end());
	reverse(M.begin(), M.end());
	cout << M[1].second << endl;
}

int main()
{
    solve();
	return 0;
}
