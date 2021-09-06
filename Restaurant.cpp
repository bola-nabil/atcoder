#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total_meal = n * 800;
    int dis = total_meal - (n/15)*200;
    cout << dis << endl;
    return 0;
}