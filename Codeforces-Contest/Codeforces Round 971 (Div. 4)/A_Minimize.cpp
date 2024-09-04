#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, Findout;
        cin >> a >> b;

        c = b - a; // Figure out;
        Findout = ((c - a) + (b - c));
        cout << Findout << endl;
    }

    return 0;
}