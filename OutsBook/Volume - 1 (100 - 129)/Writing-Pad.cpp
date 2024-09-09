#include <bits/stdc++.h>
using namespace std;

int WritingPad(int D, int x, int y)
{
    int pad = x / D;
    int pad1 = pad / 12;
    int result = pad1 * y;
    return result;
}

int main()
{
    int D, x, y;
    cin >> D >> x >> y;

    int output = WritingPad(D, x, y);
    cout << output << " Taka " << endl;

    return 0;
}