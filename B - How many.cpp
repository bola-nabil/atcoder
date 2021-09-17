#include <iostream>
using namespace std;

void solve()
{
    int s, t,count=0;
    cin >> s >> t;
	for (int i = 0; i <= s; i++) {
		for (int j = 0; j + i <= s; j++) {
			for (int k = 0; k + i + j <= s; k++) {
				if (i * j * k <= t) {
					count++;
				}
			}
		}
	}
	cout << count;
}
int main()
{
    solve(); 
    return 0;
}
