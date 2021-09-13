#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* a = new int[100005];
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
	    sum += x * a[i];
	}

	if (sum == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}