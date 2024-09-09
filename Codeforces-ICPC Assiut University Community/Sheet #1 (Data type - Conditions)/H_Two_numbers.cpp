#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int F = floor(a / b);
    int C = ceil((double)a / b);
    int R = round((double)a / b);

    cout << "floor " << a << " / " << b << " = " << F << endl;
    cout << "ceil " << a << " / " << b << " = " << C << endl;
    cout << "round " << a << " / " << b << " = " << R << endl;

    return 0;
}