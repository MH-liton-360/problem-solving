#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, mina, rina;
    cin >> x >> y;

    int MTR = x - y; // Mina more than rina y tk;
    rina = MTR / 2;  // This amount of rina;
    mina = rina + y; // This amount of mina;

    cout << mina << " " << rina << endl;

    return 0;
}