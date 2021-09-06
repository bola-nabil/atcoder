#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    set<int>count;
    count.insert(a);
    count.insert(b);
    count.insert(c);
    cout << count.size() << endl;
    return 0;
}