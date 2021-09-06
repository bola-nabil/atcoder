#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    char ss1 = toupper(s1.at(0));
    char ss2 = toupper(s2.at(0));
    char ss3 = toupper(s3.at(0));

    cout << ss1<<ss2<<ss3 << endl;
    
    return 0;
}