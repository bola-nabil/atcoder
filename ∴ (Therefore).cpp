#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dig = n % 10;

    if (dig == 2 || dig == 4 || dig == 5 || dig == 7 || dig == 9)
        cout << "hon" << endl;
    else if (dig == 0 || dig == 1 || dig == 6 || dig == 8)
        cout << "pon" << endl;
    else if (dig == 3)
        cout << "bon" << endl;
    return 0;
}