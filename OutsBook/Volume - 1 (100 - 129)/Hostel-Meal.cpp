#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, m, y, lastD;
    cin >> x >> m >> y;

    lastD = ((x * m) / (x + y));
    cout << lastD << endl;

    return 0;
}