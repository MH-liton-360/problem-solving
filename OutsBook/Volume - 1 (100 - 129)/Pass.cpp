#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, pass, par;
    cin >> x >> y;

    pass = x - y;
    par = (pass * 100) / x;
    cout << par << "%" << endl;

    return 0;
}