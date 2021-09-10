#include <iostream>
using namespace std;

int main()
{
    int H, W, h, w,res;
    cin >> H >> W >> h >> w;
    res = (H - h) * (W - w);

    cout << res << endl;
    return 0;
}