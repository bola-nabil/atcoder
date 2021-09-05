#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = stoi(s);
	reverse(s.begin(), s.end());
	int y = stoi(s);
	if (y >= 0 && y <= 2)
		cout << x << "-" << endl;
	else if (y >= 3 && y <= 6)
		cout << x << endl;
	else if (y >= 7 && y <= 9)
		cout << x << "+" << endl;
	return 0;
}