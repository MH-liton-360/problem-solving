#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, Q, R, Divisor;
    cin >> D >> Q >> R;

    Divisor = (D - R) / Q;
    cout << Divisor << endl;

    return 0;
}