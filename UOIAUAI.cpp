#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "vowel" << endl;
    else
        cout << "consonant" << endl;
    return 0;
}