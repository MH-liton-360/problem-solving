#include <bits/stdc++.h>
using namespace std;

int ChairTable(int x, int y, int T, int T1)
{
    int Table = (T - (T1 * x)) / y;
    return Table;
}

int main()
{
    int x, y, T, T1;
    cin >> x >> y >> T >> T1;

    int output = ChairTable(x, y, T, T1);
    cout << output << " Taka" << endl;

    return 0;
}