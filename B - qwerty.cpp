#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[26];
	for (int i = 1; i <= 26; i++)
		cin >> arr[i];

	for (int i = 1; i <= 26; i++)
	{
		if (arr[i] == 1) cout << "a";
		if (arr[i] == 2) cout << "b";
		if (arr[i] == 3) cout << "c";
		if (arr[i] == 4) cout << "d";
		if (arr[i] == 5) cout << "e";
		if (arr[i] == 6) cout << "f";
		if (arr[i] == 7) cout << "g";
		if (arr[i] == 8) cout << "h";
		if (arr[i] == 9) cout << "i";
		if (arr[i] == 10) cout << "j";
		if (arr[i] == 11) cout << "k";
		if (arr[i] == 12) cout << "l";
		if (arr[i] == 13) cout << "m";
		if (arr[i] == 14) cout << "n";
		if (arr[i] == 15) cout << "o";
		if (arr[i] == 16) cout << "p";
		if (arr[i] == 17) cout << "q";
		if (arr[i] == 18) cout << "r";
		if (arr[i] == 19) cout << "s";
		if (arr[i] == 20) cout << "t";
		if (arr[i] == 21) cout << "u";
		if (arr[i] == 22) cout << "v";
		if (arr[i] == 23) cout << "w";
		if (arr[i] == 24) cout << "x";
		if (arr[i] == 25) cout << "y";
		if (arr[i] == 26) cout << "z";
	}
	cout << endl;
	return 0;
}