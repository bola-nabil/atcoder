#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<char> S(N);
    for (int i = 0; i < N; i++)
        cin >> S.at(i);
    switch (S.at(K - 1)) {
    case 'A':
        S.at(K - 1) = 'a';
        break;
    case 'B':
        S.at(K - 1) = 'b';
        break;
    case 'C':
        S.at(K - 1) = 'c';
        break;
    }
    for (int i = 0; i < N; i++)
        cout << S.at(i);
}