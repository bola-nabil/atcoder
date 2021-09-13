#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    string s1 = s.substr(0, 2), s2 = s.substr(2, 2);
    long long  x1 = stoll(s1), x2 = stoll(s2);

    int f1 = x1 <= 12 && x1, f2 = x2 <= 12 && x2;
    if (!f1 && !f2)
        cout << "NA" << endl;
    else if (f1 && f2)
        cout << "AMBIGUOUS" << endl;
    else if (f1)
        cout << "MMYY" << endl;
    else
        cout << "YYMM" << endl;
	return 0;
}