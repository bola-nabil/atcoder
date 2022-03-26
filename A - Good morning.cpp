#include <iostream>
using namespace std;

int main() {

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a < c)
		cout << "Takahashi";
	else if (a > c)
		cout << "Aoki";
	else {
		if (b > d)
			cout << "Aoki";
		else
			cout << "Takahashi";
	}

	return 0;

}