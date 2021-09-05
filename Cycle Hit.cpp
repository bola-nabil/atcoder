#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> s(4);
	for (int i = 0; i < 4; i++)
		cin >> s.at(i);

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = (i + 1); j < 4; j++)
		{
			if (s.at(i) == s.at(j))
				count++;
		}
	}
	if (count > 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}