#include <iostream>
#include <string>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    string d_r = to_string(r);
    string d_g = to_string(g);
    string d_b = to_string(b);
    string t = d_r + d_g + d_b;
    int total = stoi(t);

    if (total % 4 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}