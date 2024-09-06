#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, Q, Dividend;
    cin >> D >> Q;

    int R = D / 3;

    Dividend = ((D * Q) + R);
    cout << Dividend << endl;

    return 0;
}