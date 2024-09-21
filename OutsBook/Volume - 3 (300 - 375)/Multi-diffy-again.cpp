#include <bits/stdc++.h>
using namespace std;

int multidiffy(int a, int b, int c, int d)
{
    return (a * b) - (c * d);
}

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        int output = multidiffy(a, b, c, d);
        cout << output << endl;
    }

    return 0;
}