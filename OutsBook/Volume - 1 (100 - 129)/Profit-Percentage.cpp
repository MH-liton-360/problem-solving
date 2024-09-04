#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int Profit = ((y - x) * 100) / x;
    cout << Profit << endl;

    return 0;
}